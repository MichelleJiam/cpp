/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:36:24 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/10 22:39:23 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
	_name("uNKn0Wn"),
	_maxenergy(100),
	_energy(100),
	_maxhp(100),
	_hp(100),
	_level(1),
	_melee(30),
	_ranged(20),
	_armour(5)
{
	std::cout << "Process initiated: uNKn0Wn Claptrap created" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) :
	_name(name),
	_maxenergy(100),
	_energy(100),
	_maxhp(100),
	_hp(100),
	_level(1),
	_melee(30),
	_ranged(20),
	_armour(5)
{
	std::cout << "Process initiated: new Claptrap <" << name << ">> created"
		<< std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src) : _name(src._name) {
	std::cout << "Process initiated: duplication" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "Process initiated: destruction" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "Process initiated: assignation" << std::endl;
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

void		FragTrap::rangedAttack(std::string const &target) {
	return;
}

void		FragTrap::meleeAttack(std::string const &target) {
	return;
}

void		FragTrap::takeDamage(unsigned int amount) {
	int		newhp = this->_hp + this->_armour - amount;
	this->_hp = (newhp < 0) ? 0 : newhp;
	return;
}

void		FragTrap::beRepaired(unsigned int amount) {
	int		newhp = this->_hp + amount;
	this->_hp = (newhp > this->_maxhp) ? this->_maxhp : newhp;
	return;
}
