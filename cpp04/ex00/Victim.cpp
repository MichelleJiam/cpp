/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:12:31 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 17:38:31 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called \x1B[36m" << this->_name <<
        "\033[0m just appeared!" << std::endl;
    return;
}

Victim::Victim(Victim const &src) {
    std::cout << "I didn't know I had a twin... ";
    *this = src;
    this->_name = src._name + " II";
    std::cout << "\x1B[36m" << this->_name << "\033[0m spawns out of thin air!"
        << std::endl;
    return;
}

Victim::~Victim(void) {
    std::cout << "Victim \x1B[36m" << this->_name <<
        "\033[0m just died for no apparent reason!" << std::endl;
    return;
}

Victim          &Victim::operator=(Victim const &rhs) {
    std::cout << "Hey, you're just like me!" << std::endl;
    this->_name = rhs._name;
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Victim const &rhs) {
    o << "I'm \x1B[36m" << rhs.getName() << "\033[0m and I like otters!"
        << std::endl;
    return o;
}

std::string     Victim::getName(void) const {
    return this->_name;
}

void            Victim::getPolymorphed(void) const {
    std::cout << "\x1B[36m" << this->_name << "\033[0m has been turned into "
        << "a cute little sheep!" << std::endl;
}