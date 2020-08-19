/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 17:21:12 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/19 19:25:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("uNKn0Wn") {
	std::cout << "Process initiated: \x1B[33m<uNKn0Wn>\033[0m Scavtrap created"
		<< std::endl << std::endl;
	_maxenergy = 50;
	_energy = 50;
	_maxhp = 100;
	_hp = 100;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armour = 3;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Process initiated: new Scavtrap \x1B[33m<" << name <<
		">\033[0m created" << std::endl << std::endl;
	_maxenergy = 50;
	_energy = 50;
	_maxhp = 100;
	_hp = 100;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armour = 3;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src._name + " v2.0") {
	std::cout << "Process initiated: duplication of \x1B[33m<" <<
		src._name << ">\033[0m. \x1B[33m<" << this->_name <<
		">\033[0m created" << std::endl;
	*this = src;
	std::cout << "Duplication result test - source HP [" << src._hp <<
		"] copy HP [" << this->_hp << "]" << std::endl << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Process initiated: sending \x1B[33m<" <<
		this->_name	<< ">\033[0m to scrapyard" << std::endl << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
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

void		ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP \x1B[33m<" << this->_name <<
		">\033[0m throws a handful of mints at \x1B[35m<" << target <<
		">\033[0m, hitting their head <" << this->_ranged << "> times.\n"
		<< target << ": \"Hey, that hurt.\"" << std::endl << std::endl;
	return;
}

void		ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP \x1B[33m<" << this->_name << ">\033[0m swings " <<
		"a giant cinnamon baton at \x1B[35m<" << target << 
		">\033[0m, knocking the air out of them for <" << this->_melee <<
		"> seconds.\n" << target << ": \"Oof\"" << std::endl << std::endl;
	return;
}

void		ScavTrap::challengeNewcomer(std::string const &target) {
	int	seed = rand() % 5;
	switch (seed) {
		case 0:	return this->_cinnamonChallenge(target);
		case 1: return this->_babydancerChallenge(target);
		case 2: return this->_iceChallenge(target);
		case 3:	return this->_mysterymeatChallenge(target);
		default: return this->_pirateMode(target);
	}
}

void		ScavTrap::_cinnamonChallenge(std::string const &target) {
	std::cout << "\x1B[33m<" << this->_name << ">\033[0m hands \x1B[35m<" <<
		target << ">\033[0m a spoonful of cinnamon. It gestures towards its "
		<< "frontal vent where a mouth would be and watches expectantly.\n" <<
		"Bottoms up, I guess?" << std::endl << std::endl;
	return;
}

void		ScavTrap::_babydancerChallenge(std::string const &target) {
	std::cout << "\x1B[33m<" << this->_name << ">\033[0m presses the button on"
		<< " a jukebox conveniently sitting nearby and hands \x1B[35m<" <<
		target << ">\033[0m a unicycle. Some garbled reggaeton comes on.\n"
		<< this->_name << ": \"Shhh. Just let your wheels do the talking.\""
		<< std::endl << std::endl;
}

void		ScavTrap::_iceChallenge(std::string const &target) {
	std::cout << "\x1B[33m<" << this->_name << ">\033[0m hands \x1B[35m<" <<
		target << ">\033[0m a bucket full of ice. Ice bucket challenge? No.. "
		<< "It gestures towards its frontal vent where a mouth would be.\n" <<
		"\x1B[35m<" << target << ">\033[0m's dentist isn't going to be happy."
		<< std::endl << std::endl;
	return;
}

void		ScavTrap::_mysterymeatChallenge(std::string const &target) {
	std::cout << "\x1B[33m<" << this->_name << ">\033[0m hands \x1B[35m<" <<
		target << ">\033[0m a plate with a mysterious pink rectangle of "
		<< "meat(?).\nIt offers a napkin and a fork. Close your eyes and maybe"
		<< " it'll taste just like chicken?" << std::endl << std::endl;
	return;
}

void		ScavTrap::_pirateMode(std::string const &target) {
	std::cout << "\x1B[33m<" << this->_name << ">\033[0m dons a pirate hat "
		<< "and hands \x1B[35m<" <<	target << ">\033[0m an entire crate of "
		<< "limes. And the grimiest bottle of rum they've ever seen.\n" <<
		"Drink up, me hearties?" << std::endl << std::endl;
	return;
}
