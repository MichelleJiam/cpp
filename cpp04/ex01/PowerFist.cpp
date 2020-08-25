/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:00:36 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 17:44:00 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
    return;
}

PowerFist::PowerFist(PowerFist const &src)
    : AWeapon(src._name, src._apcost, src._damage) {
    *this = src;
    this->_name = src._name + " 2.0";
    return;
}

PowerFist::~PowerFist(void) {
    return;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return *this;
}

void    PowerFist::attack(void) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return;
}
