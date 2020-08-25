/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:01:56 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 20:37:47 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) {
    this->_name = name;
    this->_ap = 40;
    this->_weapon = NULL;
    return;
}

Character::Character(Character const &src) {
    *this = src;
    this->_name = src._name + " II";
    return;
}

Character::~Character(void) {
    return;
}

Character       &Character::operator=(Character const &rhs) {
    this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_weapon = rhs._weapon;
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Character const &rhs) {
    o << rhs.getName() << " has " << rhs.getAP() << " and " << rhs.getWeapon()
        << std::endl;
    return o;
}

int             Character::getAP(void) const {
    return this->_ap;
}

std::string     Character::getName(void) const {
    return this->_name;
}

std::string     Character::getWeapon(void) const {
    if (this->_weapon == NULL)
        return "is unarmed";
    else
        return ("wields a " + this->_weapon->getName());
}

void            Character::recoverAP(void) {
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
    std::cout << this->_name << " has recovered some AP! Current AP: "
        << this->_ap << std::endl;
    return;
}

void            Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
    return;
}

void            Character::attack(Enemy *enemy) {
    if (this->_weapon == NULL || this->_ap < this->_weapon->getAPCost())
        return;
    this->_ap -= this->_weapon->getAPCost();
    std::cout << this->_name << " attacks " << enemy->getType() <<
        " with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    enemy->takeDamage(this->_weapon->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
    return;
}
