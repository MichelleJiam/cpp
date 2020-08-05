/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:47:35 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/04 12:35:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "A zombie apocalypse is upon us." << std::endl;
	return;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "\nThe zombie apocalypse is over." << std::endl;
	return;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie	*zombie = new Zombie(name, _eventType);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(void) {
	std::string name;
	switch (rand() % 6) {
		case 0: name = "Bob Rando";
				break;
		case 1: name = "Mary Rando";
				break;
		case 2: name = "Lee Ran Do";
				break;
		case 3: name = "Rando Singh";
				break;
		case 4: name = "Ramlee Rando";
				break;
		default: name = "uNKn0Wn";
				break;
	}
	Zombie	*zombie = new Zombie(name, _eventType);
	zombie->announce();
	return (zombie);
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_eventType = type;
	return;
}
