/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:58:13 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/27 18:20:54 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
    this->setXP(0);
    return;
}

Ice::Ice(Ice const &src) : AMateria(src.getType()) {
    this->setXP(src.getXP());
    return;
}

Ice::~Ice(void) {
    return;
}

Ice         &Ice::operator=(Ice const &rhs) {
    if (this != &rhs)
        this->setXP(rhs.getXP());
    return *this;
}

AMateria    *Ice::clone(void) const {
    AMateria    *clone = new (std::nothrow) Ice(*this);
    if (!clone)
        std::cout <<  "Failed to clone materia" << std::endl;
    return clone;
}

void        Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
        << std::endl;
    return;
}
