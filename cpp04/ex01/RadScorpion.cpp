/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:01:40 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 14:55:36 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src._hp, src._type) {
    *this = src;
    return;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
    return;
}
RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
    if (this != &rhs) {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

void    RadScorpion::takeDamage(int damage) {
    Enemy::takeDamage(damage);
    return;
}
