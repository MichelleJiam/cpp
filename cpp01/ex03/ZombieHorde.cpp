/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 20:59:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/04 12:48:20 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    std::cout << "A zombie horde has been unleashed.\n" << std::endl;
    this->_zombies = new Zombie[N];
    srand(time(NULL));
    for (int z = 0; z < N; z++) {
        this->_zombies[z].setname(zombieNamer());
        this->_zombies[z].settype("Popcorn");
    }
    std::cout << std::endl;
    announceHorde(N);
    return;
}

ZombieHorde::~ZombieHorde(void) {
    std::cout << std::endl;
    delete [] _zombies;
    std::cout << "\nThe zombie horde has been eliminated." << std::endl;
    return;
}

void        ZombieHorde::announceHorde(int N) const {
    for (int z = 0; z < N; z++) 
       this->_zombies[z].announce();
    return;
}

std::string  ZombieHorde::zombieNamer(void) {
    switch (rand() % 9) {
		case 0: return ("Bob Rando");
		case 1: return ("Mary Rando");
		case 2: return ("Lee Ran Do");
		case 3: return ("Rando Singh");
		case 4: return ("Ramlee Rando");
        case 5: return ("Ran Dom");
        case 6: return ("Rocky Ran");
        case 7: return ("Ranbert Burns");
		default: return ("uNKn0Wn");
	}
}
