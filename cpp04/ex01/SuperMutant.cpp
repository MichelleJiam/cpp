/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 17:01:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 18:14:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src._hp, src._type) {
    *this = src;
    return;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh..." << std::endl;
    return;
}
SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return *this;
}

void    SuperMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
    return;
}
