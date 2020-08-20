/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:36:24 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/20 18:00:17 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("uNKn0Wn") {
	std::cout << "Process initiated: \x1B[36m<uNKn0Wn>\033[0m Fragtrap created"
		<< std::endl << std::endl;
	_maxenergy = 100;
	_energy = 100;
	_maxhp = 100;
	_hp = 100;
	_level = 1;
	_melee = 30;
	_ranged = 20;
	_armour = 5;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Process initiated: new Fragtrap \x1B[36m<" << name <<
		">\033[0m created" << std::endl << std::endl;
	_maxenergy = 100;
	_energy = 100;
	_maxhp = 100;
	_hp = 100;
	_level = 1;
	_melee = 30;
	_ranged = 20;
	_armour = 5;
	return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src._name + " v2.0") {
	std::cout << "Process initiated: duplication of \x1B[36m<" <<
		src._name << ">\033[0m. \x1B[36m<" << this->_name <<
		">\033[0m created" << std::endl;
	*this = src;
	std::cout << "Duplication result test - source HP [" << src._hp <<
		"] copy HP [" << this->_hp << "]" << std::endl << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "Process initiated: sending \x1B[36m<" <<
		this->_name	<< ">\033[0m to a far-away farm" << std::endl << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
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

void		FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP \x1B[36m<" << this->_name <<
		">\033[0m fires a marshmallow gun at \x1B[35m<" << target <<
		">\033[0m, filling their mouth with <" << this->_ranged <<
		"> marshmallows.\n" << target << ": \"Mfhphfwfmnh\"" <<
		std::endl << std::endl;
	return;
}

void		FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP \x1B[36m<" << this->_name << ">\033[0m hits " <<
		"\x1B[35m<" << target << ">\033[0m with a giant candy cane, " <<
		"giving them a sugar high for <" << this->_melee << "> seconds.\n" <<
		target << ": \"Ugh my head\"\n" << std::endl;
	return;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (this->_energy < 25) {
		std::cout << "\x1B[36m<" << this->_name <<
		">\033[0m makes a whirring sound. Nothing happens. " <<
		"Seems it doesn't have enough energy." << std::endl << std::endl;
		return;
	}
	this->_energy -= 25;
	int	seed = rand() % 5;
	switch (seed) {
		case 0:	return this->_chocoBomber(target);
		case 1: return this->_cinnamonChallenge(target);
		case 2: return this->_iceScream(target);
		case 3:	return this->_nutBuster(target);
		default: return this->_pirateMode(target);
	}
}

void		FragTrap::_chocoBomber(std::string const &target) {
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m launches a hail of " <<
		"brandy-filled chocolate. \x1B[35m<" << target <<
		">\033[0m can't resist eating some and becomes inebriated.\n" <<
		"Energy left: " << this->_energy << std::endl << std::endl;
	return;
}

void		FragTrap::_cinnamonChallenge(std::string const &target) {
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m launches a spoonful of"
		" cinnamon into \x1B[35m<" << target << ">\033[0m's mouth. They fall "
		"over coughing, surrounded by a cloud of cinnamon.\n" <<
		"Energy left: " << this->_energy << std::endl << std::endl;
	return;
}

void		FragTrap::_iceScream(std::string const &target) {
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m rains ice cream down "
		"onto \x1B[35m<" << target << ">\033[0m. They fall to the ground, "
		"clutching their head. Brain freeeeze.\n" <<
		"Energy left: " << this->_energy << std::endl << std::endl;
	return;
}

void		FragTrap::_nutBuster(std::string const &target) {
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m pelts \x1B[35m<" << 
		target << ">\033[0m with a shower of walnuts. " <<
		"One hits a sensitive spot. They're incapacitated.\n" <<
		"Energy left: " << this->_energy << std::endl << std::endl;
	return;
}

void		FragTrap::_pirateMode(std::string const &target) {
	std::cout << "\x1B[36m<" << this->_name << ">\033[0m dons a pirate hat. "
		"Tchaikovsky's 1812 Overture rings through the air. " <<
		"Cannonballs fly through the sky. \x1B[35m<" << target <<
		">\033[0m is blown away.\n" <<
		"Energy left: " << this->_energy << std::endl << std::endl;
	return;
}
