/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:58:21 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 17:19:10 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
    return;
}

Cure::Cure(Cure const &src) : AMateria(src.getType()) {
    this->setXP(src.getXP());
    return;
}

Cure::~Cure(void) {
    return;
}

Cure         &Cure::operator=(Cure const &rhs) {
    if (this != &rhs)
        this->setXP(rhs.getXP());
    return *this;
}

AMateria    *Cure::clone(void) const {
    AMateria    *clone = new (std::nothrow) Cure(*this);
    if (!clone)
        std::cout <<  "Failed to clone materia" << std::endl;
    return clone;
}

void        Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    AMateria::use(target);
    return;
}
