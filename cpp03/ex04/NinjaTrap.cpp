/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 20:29:48 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/18 20:29:48 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("uNKn0Wn") {
	std::cout << "Process initiated: \x1B[31m<uNKn0Wn>\033[0m Ninjatrap created"
		<< std::endl << std::endl;
	_maxenergy = 120;
	_energy = 120;
	_maxhp = 60;
	_hp = 60;
	_melee = 60;
	_ranged = 5;
	_armour = 0;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	std::cout << "Process initiated: new Ninjatrap \x1B[31m<" << name <<
		">\033[0m created" << std::endl << std::endl;
	_maxenergy = 120;
	_energy = 120;
	_maxhp = 60;
	_hp = 60;
	_melee = 60;
	_ranged = 5;
	_armour = 0;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src._name + " v2.0") {
	std::cout << "Process initiated: duplication of \x1B[31m<" <<
		src._name << ">\033[0m. \x1B[31m<" << this->_name <<
		">\033[0m created" << std::endl;
	*this = src;
	std::cout << "Duplication result test - source HP [" << src._hp <<
		"] copy HP [" << this->_hp << "]" << std::endl << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "Process initiated: \x1B[31m<" <<
		this->_name	<< ">\033[0m disappears into the shadows" <<
		std::endl << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs) {
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

void		NinjaTrap::rangedAttack(std::string const &target) {
	std::cout << "NINJ4-TP \x1B[31m<" << this->_name <<
		">\033[0m throws <" << this->_ranged << "> Doritos shurikens" <<
		" towards \x1B[35m<" << target << ">\033[0m, " <<
		"one hitting them in the eye.\n" <<
		target << ": \"Ouch!\"" << std::endl << std::endl;
	return;
}

void		NinjaTrap::meleeAttack(std::string const &target) {
	std::cout << "NINJ4-TP \x1B[31m<" << this->_name << ">\033[0m swings " <<
		"a massive konpeito morning star down onto \x1B[35m<" << target << 
		">\033[0m's head, knocking them out for <" << this->_melee <<
		"> seconds.\n" << target << ": *groans*" << std::endl << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(FragTrap const &target) {
	std::cout << "Ranged support incoming: FR4G-TP \x1B[36m<" <<
		target.getName() << ">\033[0m wheels into view.\nThey launch a volley"
		<< " of sweet projectiles. \x1B[31m<" << this->_name << ">\033[0m " <<
		"fires simultaneously and together they deal <" << this->_ranged +
		target.getData(ranged) << "> damage!" << std::endl << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const &target) {
	std::cout << "Melee support incoming: SC4V-TP \x1B[33m<" << target.getName()
		<< ">\033[0m crashes through the skylight and unleashes hell on Earth.\n"
		<< "They deal <" << target.getData(melee) << "> damage. \x1B[31m<" <<
		this->_name << ">\033[0m looks quite unimpressed.\n" <<
		this->_name << ": \"I will not require further assistance.\""
		<< std::endl << std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
	std::cout << "Additional support incoming: NINJ4-TP \x1B[31m<" <<
		target.getName() << ">\033[0m emerges from the shadows.\nIt jumps on" <<
		"top of its fellow NinjaTrap, combining into a towering GigaNinjaTrap,"
		<< " with spiky-looking maces in each hand.\n" << "They wreck a " << 
		"massive <" << this->_melee + target.getData(melee) <<
		"> damage, leaving not a few holes in the surroundings." <<
		std::endl << std::endl;
	return;
}
