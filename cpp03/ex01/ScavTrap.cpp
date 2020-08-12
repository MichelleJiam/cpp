/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 17:21:12 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/12 17:45:37 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
	_name("uNKn0Wn"),
	_maxenergy(50),
	_energy(50),
	_maxhp(100),
	_hp(100),
	_level(1),
	_melee(20),
	_ranged(15),
	_armour(3)
{
	std::cout << "Process initiated: \x1B[36m<uNKn0Wn>\033[0m Scavtrap created\n"
		<< std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) :
	_name(name),
	_maxenergy(50),
	_energy(50),
	_maxhp(100),
	_hp(100),
	_level(1),
	_melee(20),
	_ranged(15),
	_armour(3)
{
	std::cout << "Process initiated: new Scavtrap \x1B[36m<" << name <<
		">\033[0m created\n" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : _name(src._name + " v2.0") {
	std::cout << "Process initiated: duplication of \x1B[36m<" <<
		src._name << ">\033[0m. \x1B[36m<" << this->_name <<
		">\033[0m created" << std::endl;
	*this = src;
	std::cout << "Duplication result test - source HP [" << src._hp <<
		"] copy HP [" << this->_hp << "]\n" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Process initiated: sending \x1B[36m<" <<
		this->_name	<< ">\033[0m to scrapyard\n" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "Process initiated: assignation of model stats\n"
		<< std::endl;
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

void		ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP \x1B[36m<" << this->_name <<
		">\033[0m throws a handful of mints at \x1B[35m<" << target <<
		">\033[0m, hitting their head <" << this->_ranged << "> times."
		<< std::endl << target << ": \"Hey, that hurt.\"\n" << std::endl;
	return;
}

void		ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP \x1B[36m<" << this->_name << ">\033[0m swings " <<
		"a giant cinnamon baton at \x1B[35m<" << target << 
		">\033, knocking the air out of them for <" << this->_ranged <<
		"> seconds.\n" << target << ": \"Oof\"\n" << std::endl;
	return;
}

void		ScavTrap::challengeNewcomer(std::string const &target) {
	
}

void		ScavTrap::takeDamage(unsigned int amount) {
	if (amount < this->_armour) {
		std::cout << "\x1B[36m<" << this->_name << ">\033[0m wobbles a little. "
		<< "Attempted attack was negated by their armour.\n" << std::endl;
		return;
	}
	int under = (this->_hp + this->_armour - amount) == 0 ? this->_hp : 0;
	this->_hp = under ? 0 : this->_hp + this->_armour - amount;
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m is hit with <" <<
		(under ? under : amount - this->_armour) << "> damage. HP left: "
		<< this->_hp << std::endl << std::endl;
	return;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	int over = this->_hp + amount > this->_maxhp ? this->_maxhp - this->_hp : 0;
	this->_hp = over ? this->_maxhp : this->_hp + amount;
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m has been repaired and"
		" regains <" << (over ? over : amount) << "> life. HP left: " <<
		this->_hp << std::endl << std::endl;
	return;
}
