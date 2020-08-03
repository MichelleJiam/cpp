/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 16:47:38 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 20:54:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include "ZombieEvent.hpp"

int main(void) {
    ZombieEvent apocalypse;
    Zombie      stacky("Shortstack", "Pancake");
    Zombie      *heapy;

    stacky.announce();

    apocalypse.setZombieType("Peanut");
    heapy = apocalypse.newZombie("Marlon NotRando");
    heapy->announce();
    delete heapy;

    srand(time(NULL));
    apocalypse.setZombieType("Butter");
    heapy = apocalypse.randomChump();
    delete heapy;

    apocalypse.setZombieType("Jelly");
    heapy = apocalypse.randomChump();
    delete heapy;
    
    return 0;
}