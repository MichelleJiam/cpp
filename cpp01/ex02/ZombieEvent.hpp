/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:48:01 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 17:25:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	Zombie		*newZombie(std::string name);
	Zombie		*randomChump();
	void		setZombieType(std::string type);

private:
	std::string	_eventType;
};

#endif