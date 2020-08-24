/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:12:31 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/24 20:55:38 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << this->_name <<
        " just appeared!" << std::endl;
    return;
}

Victim::Victim(Victim const &src) {
    std::cout << "I didn't know I had a twin..." << std::endl;
    *this = src;
    return;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name <<
        " just died for no apparent reason!" << std::endl;
    return;
}

Victim          &Victim::operator=(Victim const &rhs) {
    std::cout << "Hey, you're just like me!" << std::endl;
    this->_name = rhs._name;
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Victim const &rhs) {
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}

std::string     Victim::getName(void) const {
    return this->_name;
}

void            Victim::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a cute little sheep!"
        << std::endl;
}