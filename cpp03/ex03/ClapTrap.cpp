/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 17:49:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/14 17:49:05 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("uNKn0Wn") {
	std::cout << "Process initiated: \x1B[37;1m<uNKn0Wn>\033[0m Claptrap created"
		<< std::endl << std::endl;
	_maxhp = 100;
	_hp = 100;
	_level = 1;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "Process initiated: new Claptrap \x1B[37;1m<" << name <<
		">\033[0m created" << std::endl << std::endl;
	_maxhp = 100;
	_hp = 100;
	_level = 1;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name + " v2.0") {
	std::cout << "Process initiated: duplication of \x1B[37;1m<" <<
		src._name << ">\033[0m. \x1B[37;1m<" << this->_name <<
		">\033[0m created" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Process initiated: Claptrap self-destruction" <<
		std::endl << std::endl;
	return;
}

ClapTrap 		&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "Process initiated: assignation of model stats" <<
		std::endl << std::endl;
	this->_maxenergy = rhs._maxenergy;
	this->_energy = rhs._energy;
	this->_maxhp = rhs._maxhp;
	this->_hp = rhs._hp;
	this->_level = rhs._level;
	this->_melee = rhs._melee;
	this->_ranged = rhs._ranged;
	this->_armour = rhs._armour;
	return *this;
}

int				ClapTrap::getData(category type) const {
	switch (type) {
		case 0:	return this->_maxenergy;
		case 1: return this->_energy;
		case 2: return this->_maxhp;
		case 3:	return this->_hp;
		case 4: return this->_level;
		case 5: return this->_melee;
		case 6: return this->_ranged;
		case 7: return this->_armour;
	}
	return (-1);
}

std::string		ClapTrap::getName(void) const {
	return this->_name;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	if (amount < this->_armour) {
		std::cout << "\x1B[37;1m<" << this->_name << ">\033[0m wobbles a little. "
			<< "Attempted attack was negated by their armour." <<
			std::endl << std::endl;
		return;
	}
	amount = (amount - this->_armour) >= this->_hp ?
				this->_hp :	(amount - this->_armour);
	this->_hp -= amount;
	std::cout << "\x1B[37;1m<" << this->_name << ">\033[0m is hit with <" <<
		amount << "> damage. HP left: " << this->_hp << std::endl << std::endl;
	return;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	amount = (this->_hp + amount) >= this->_maxhp ?
				this->_maxhp - this->_hp : amount;
	this->_hp += amount;
	std::cout << "\x1B[37;1m<" << this->_name << ">\033[0m has been repaired and"
		<< " regains <" << amount << "> life. HP left: " << this->_hp
		<< std::endl << std::endl;
	return;
}
