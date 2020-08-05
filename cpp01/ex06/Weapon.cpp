/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:40:21 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:53:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->_type = type;
    return;
}

Weapon::~Weapon(void) {
}

std::string const   &Weapon::getType(void) const {
    return this->_type;
}

void                Weapon::setType(std::string type) {
    this->_type = type;
    return;
}
