/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:41:10 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 16:17:06 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
    return;
}

HumanB::~HumanB(void) {
}

void    HumanB::attack(void) const {
    std::cout << this->_name << " is about to get violent with his " <<
        this->_weapon->getType() << std::endl;
    return;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
    return;
}
