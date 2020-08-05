/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:37:00 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/04 12:34:49 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	std::cout << "\nZombie (" << name << ") was spawned." << std::endl;
	this->_type = type;
	this->_name = name;
	return;
}

Zombie::Zombie(void) {
	std::cout << "A zombie was spawned." << std::endl;
	return;
}

Zombie::~Zombie() {
	std::cout << "Zombie (" << _name << ") was destroyed." << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::string line;
	if (_name.compare("uNKn0Wn") == 0)
		line = "øUH~âÂŒ!ÉÏæ†";
	else
		line = "Which aisle are the brains in?";
	std::cout << this->_name << " (a " << this->_type << " zombie) says: " << line
	<< std::endl;
	return;
}

void	Zombie::setname(std::string name) {
	this->_name = name;
	return;
}

void	Zombie::settype(std::string type) {
	this->_type = type;
	return;
}
