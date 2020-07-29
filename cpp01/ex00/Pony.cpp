/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:12:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 18:17:27 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void) : _power(0) {
    std::cout << "Pony born" << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Pony culled" << std::endl;
    return;
}

void    Pony::ride_pony(void) {
    std::cout << "You ride the pony. It looks a bit tired.";
    Pony::_power -= 1;
    std::cout << "Pony power level: " << Pony::getponypower << std::endl;
    return;
}

void    Pony::brush_pony(void) {
    std::cout << "You brush the pony. Its mane glistens.";
    Pony::_power += 1;
    std::cout << "Pony power level: " << Pony::getponypower << std::endl;
    return;
}

int     Pony::getponypower(void) const {
    return Pony::_power;
}

void    ponyOnTheStack(void) {
    std::cout << "The pony is on the (hay)stack." << std::endl;
    Pony    pony;

    pony.brush_pony();
    pony.ride_pony();
    pony.brush_pony();
    std::cout << "The pony gets off the (hay)stack." << std::endl;
    return;
}

void    ponyOnTheHeap(void) {
    std::cout << "The pony is on the heap (of carrots)." << std::endl;
    Pony    *pony = new Pony;

    pony->brush_pony();
    pony->ride_pony();
    pony->brush_pony();
    std::cout << "The pony gets off the heap (of carrots)." << std::endl;
    delete pony;
    return;
}