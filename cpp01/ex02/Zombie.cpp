/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:37:00 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/30 14:51:11 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie spawned" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie destroyed" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << " (a " << this->_type << " zombie) says: " <<
	"Excuse me, can I eat your brains?" << std::endl;
}