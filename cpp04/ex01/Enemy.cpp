/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:01:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:09:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
    return;
}

Enemy::Enemy(int hp, std::string const &type)
    : _type(type), _hp(hp) {
    return;
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
    return;
}

Enemy::~Enemy(void) {
    return;
}

Enemy       &Enemy::operator=(Enemy const &rhs) {
    if (this != &rhs) {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

std::string Enemy::getType(void) const {
    return this->_type;
}

int         Enemy::getHP(void) const {
    return this->_hp;
}

void        Enemy::takeDamage(int damage) {
    if (damage < 0)
        return;
    else
        this->_hp -= (damage > this->_hp) ? this->_hp : damage;
    return;
}
