/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:00:13 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 17:42:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
    : AWeapon(src._name, src._apcost, src._damage) {
    *this = src;
    this->_name = src._name + " 2.0";
    return;
}

PlasmaRifle::~PlasmaRifle(void) {
    return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return *this;
}

void    PlasmaRifle::attack(void) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return;
}
