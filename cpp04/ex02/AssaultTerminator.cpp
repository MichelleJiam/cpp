/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:51:01 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 18:58:17 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
    *this = src;
    return;
}

AssaultTerminator::~AssaultTerminator(void) {
    std::cout << "I’ll be back..." << std::endl;
    return;
}

AssaultTerminator  &AssaultTerminator::operator=(AssaultTerminator const &rhs) {
    (void)rhs;
    return *this;
}

ISpaceMarine    *AssaultTerminator::clone(void) const {
    ISpaceMarine    *clone = new (std::nothrow) AssaultTerminator(*this);
    if (!clone)
        std::cout << "Failed to clone Assault Terminator" << std::endl;
    return clone;
}

void            AssaultTerminator::battleCry(void) const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
    return;
}

void            AssaultTerminator::rangedAttack(void) const {
    std::cout << "* does nothing *" << std::endl;
    return;
}

void            AssaultTerminator::meleeAttack(void) const {
    std::cout << "* attacks with chainfists *" << std::endl;
    return;
}
