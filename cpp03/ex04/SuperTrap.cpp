/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:47:41 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/20 14:47:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
	: 	ClapTrap("uNKn0Wn"),
		FragTrap("uNKn0Wn"),
		NinjaTrap("uNKn0Wn") {
	std::cout << "Process initiated: \x1B[34m<uNKn0Wn>\033[0m Supertrap created"
		<< std::endl << std::endl;
	_maxenergy = NinjaTrap::_maxenergy;
	_energy = NinjaTrap::_energy;
	_maxhp = FragTrap::_maxhp;
	_hp = FragTrap::_hp;
	_melee = NinjaTrap::_melee;
	_ranged = FragTrap::_ranged;
	_armour = FragTrap::_armour;
	return;
}

SuperTrap::SuperTrap(std::string name)
	: 	ClapTrap(name),
		FragTrap(name),
		NinjaTrap(name) {
	std::cout << "Process initiated: new Supertrap \x1B[34m<" << name <<
		">\033[0m created" << std::endl << std::endl;
	_maxenergy = NinjaTrap::_maxenergy;
	_energy = NinjaTrap::_energy;
	_maxhp = 100;
	_hp = 100;
	_melee = NinjaTrap::_melee;
	_ranged = 20;
	_armour = 5;
	return;
}
// manually setting Frag-derived values is necessary because initialisation
// order overwrites FragTrap values with NinjaTrap values.

SuperTrap::SuperTrap(SuperTrap const &src)
	: 	ClapTrap(src._name + " v2.0"),
		FragTrap(src._name + " v2.0"),
		NinjaTrap(src._name + " v2.0") {
	std::cout << "Process initiated: duplication of \x1B[34m<" <<
		src._name << ">\033[0m. \x1B[34m<" << this->_name <<
		">\033[0m created" << std::endl;
	*this = src;
	std::cout << "Duplication result test - source HP [" << src._hp <<
		"] copy HP [" << this->_hp << "]" << std::endl << std::endl;
	return;	
}

SuperTrap::~SuperTrap(void) {
	std::cout << "Process initiated: sending \x1B[34m<" << this->_name	<<
		">\033[0m to take a very long swim" << std::endl << std::endl;
	return;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs) {
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

void		SuperTrap::rangedAttack(std::string const &target) {
	FragTrap::rangedAttack(target);
	return;
}

void		SuperTrap::meleeAttack(std::string const &target) {
	NinjaTrap::meleeAttack(target);
	return;
}
