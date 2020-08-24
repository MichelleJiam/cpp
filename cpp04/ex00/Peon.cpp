/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:12:41 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/24 21:06:50 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) : Victim(src._name) {
    std::cout << "I didn't know I had a twin..." << std::endl;
    *this = src;
    return;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

Peon          &Peon::operator=(Peon const &rhs) {
    std::cout << "Hey, you're just like me!" << std::endl;
    this->_name = rhs._name;
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Peon const &rhs) {
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}

void            Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony!"
        << std::endl;
}
