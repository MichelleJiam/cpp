/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:26:25 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 14:36:27 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _units(NULL) {
}

Squad::Squad(Squad const &src) {
    this->_units = this->_copy(src);
    return;
}

Squad::~Squad(void) {
    if (this->_units)
        this->_clear(this->_units);
    return;
}

Squad           &Squad::operator=(Squad const &rhs) {
    if (this != &rhs) {
        this->_clear(this->_units);
        this->_units = this->_copy(rhs);
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
    new_units = this->_copy(*this);
    delete [] this->_units;
    this->_units = new_units;
    this->_units[this->_count] = unit;
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

ISpaceMarine    **Squad::_copy(Squad const &src) {
    int             i = 0;
    ISpaceMarine    **array = new (std::nothrow) ISpaceMarine *[src._count + 1]; // nothrow allows NULL as return on error
    if (!array)
        std::cout << "Failed to allocate new array" << std::endl;
    else {
        for (i = 0; i < src._count; i++) { // sibling access allows getting private vars
            array[i] = src._units[i]->clone();
            if (!array[i]) {
                std::cout << "Failed to copy unit" << std::endl;
                this->_clear(array);
            }
        }
        array[i] = NULL;
    }
    this->_count = i;
    return array;
}
