/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 20:59:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 21:34:04 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    std::cout << "A zombie horde has been unleashed." << std::endl;
    this->_zombies = new Zombie[N];
    for (int z = 0; z < N; z++) {
        this->_zombies[z].setname(zombieNamer());
        this->_zombies[z].settype("Ranting");
    }
}

ZombieHorde::~ZombieHorde(void) {
    delete [] _zombies;
    std::cout << "The zombie horde has been eliminated." << std::endl;
}

void        ZombieHorde::announce(void) const {
    
}

std::string  ZombieHorde::zombieNamer(void) {
    srand(time(NULL));
    switch (rand() % 6) {
		case 0: return ("Bob Rando");
		case 1: return ("Mary Rando");
		case 2: return ("Lee Ran Do");
		case 3: return ("Rando Singh");
		case 4: return ("Ramlee Rando");
		default: return ("uNKn0Wn");
	}
}
