/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:12:41 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:08:22 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) : Victim(src._name) {
    std::cout << "I didn't know I had a twin... ";
    *this = src;
    this->_name = src._name + " II";
    std::cout << "\x1B[34m" << this->_name << "\033[0m spawns out of thin air!"
        << std::endl;
    return;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon          &Peon::operator=(Peon const &rhs) {
    std::cout << "Hey, you're just like me!" << std::endl;
    this->_name = rhs._name;
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Peon const &rhs) {
    o << "I'm \x1B[34m" << rhs.getName() << "\033[0m and I like otters!"
        << std::endl;
    return o;
}

void            Peon::getPolymorphed(void) const {
    std::cout << "\x1B[34m" << this->_name << "\033[0m has been turned " <<
        "into a pink pony!" << std::endl;
    return;
}
