/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:23:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 18:49:51 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
    *this = src;
    return;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh..." << std::endl;
    return;
}

TacticalMarine  &TacticalMarine::operator=(TacticalMarine const &rhs) {
    (void)rhs;
    return *this;
}

ISpaceMarine    *TacticalMarine::clone(void) const {
    ISpaceMarine    *clone = new (std::nothrow) TacticalMarine(*this);
    if (!clone)
        std::cout << "Failed to clone Tactical Marine" << std::endl;
    return clone;
}

void            TacticalMarine::battleCry(void) const {
    std::cout << "For the holy PLOT!" << std::endl;
    return;
}

void            TacticalMarine::rangedAttack(void) const {
    std::cout << "* attacks with a bolter *" << std::endl;
    return;
}

void            TacticalMarine::meleeAttack(void) const {
    std::cout << "* attacks with a chainsword *" << std::endl;
    return;
}
