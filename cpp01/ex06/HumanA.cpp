/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:41:03 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 16:16:56 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void    HumanA::attack(void) const {
    std::cout << this->_name << " is about to get violent with his " <<
        this->_weapon.getType() << std::endl;
    return;
}
