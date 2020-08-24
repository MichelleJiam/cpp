/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:12:19 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/24 21:08:15 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
    : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
    return;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    std::cout << "Imitation is the sincerest form of flattery that " <<
        "mediocrity can pay to greatness." << std::endl;
    *this = src;
    return;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. " <<
        "Consequences will never be the same!" << std::endl;
    return;
}

Sorcerer        &Sorcerer::operator=(Sorcerer const &rhs) {
    std::cout << "You dare think me your equal?!" << std::endl;
    this->_name = rhs._name;
    this->_title = rhs._title;
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() <<
        ", and I like ponies!" << std::endl;
    return o;
}

std::string     Sorcerer::getName(void) const {
    return this->_name;
}

std::string     Sorcerer::getTitle(void) const {
    return this->_title;
}

void            Sorcerer::polymorph(Victim const &target) const {
    target.getPolymorphed();
    return;
}
