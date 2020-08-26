/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:26:25 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 21:29:03 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) {
    this->_count = 0;
    this->_units = NULL;
}

Squad::Squad(Squad const &src) {
    this->_copy(src, this->_units, this->_count);
    return;
}

Squad::~Squad(void) {
    // if (this->_units)
        this->_clear(this->_units);
    return;
}

Squad           &Squad::operator=(Squad const &rhs) {
    if (this != &rhs) {
        this->_clear(this->_units);
        this->_copy(rhs, this->_units, this->_count);
    }
    return *this;
}

int             Squad::getCount(void) const {
    return this->_count;
}

ISpaceMarine    *Squad::getUnit(int n) const {
    if (n < 0 || n >= this->_count)
        return NULL;
    return this->_units[n];
}

int             Squad::push(ISpaceMarine *unit) {
    if (!unit)
        return this->_count;
    for (int i = 0; i < this->_count; i++) {
        if (this->_units[i] == unit) {
            std::cout << "Unit already in squad" << std::endl;
            return this->_count;
        }
    }
    ISpaceMarine    **new_units = NULL;
    // this->_units[this->_count] = unit;
    // this->_count++;
    // this->_copy(*this, new_units, this->_count + 1);
    int i = 0;
    new_units = new (std::nothrow) ISpaceMarine *[_count + 1]; // nothrow allows NULL as return on error
    if (!new_units)
        std::cout << "Failed to allocate new array" << std::endl;
    else {
        for (i = 0; i < _count; i++) { // sibling access allows getting private vars
            std::cout << "Starting copy\n";
            new_units[i] = _units[i];
            if (!new_units[i]) {
                std::cout << "Failed to copy unit" << std::endl;
                this->_clear(new_units);
            }
        }
        new_units[i] = NULL;
    }
    delete [] this->_units;
    this->_units = new_units;
    std::cout << _count << std::endl;
    this->_units[this->_count] = unit; // causes segv (write access, zero page address)
    this->_count++;
    return this->_count;
}

void            Squad::_clear(ISpaceMarine **array) {
    for (int i = 0; i < this->_count; i++)
        delete array[i];
    delete [] array;
    array = NULL;
    this->_count = 0;
    return;
}

void            Squad::_copy(Squad const &src, ISpaceMarine **array, int size) {
    int i = 0;
    array = new (std::nothrow) ISpaceMarine *[size]; // nothrow allows NULL as return on error
    if (!array)
        std::cout << "Failed to allocate new array" << std::endl;
    else {
        for (i = 0; i < src._count; i++) { // sibling access allows getting private vars
            std::cout << "Starting copy\n";
            array[i] = src._units[i];
            if (!array[i]) {
                std::cout << "Failed to copy unit" << std::endl;
                this->_clear(array);
            }
        }
        array[i] = NULL;
    }
    this->_count = i;
    std::cout << i << std::endl;
    return;
}
