/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:12:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/30 13:43:07 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void) : _power(0) {
    std::cout << "Pony is born." << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Pony went to live on a far-away farm." << std::endl;
    return;
}

void    Pony::ride_pony(void) {
    std::cout << "You ride the pony. It looks a bit tired. ";
    Pony::_power -= 1;
    std::cout << "Pony power level: " << Pony::getponypower() << std::endl;
    return;
}

void    Pony::brush_pony(void) {
    std::cout << "You brush the pony. Its mane glistens. ";
    Pony::getponypower() += 2; // another way to modify _power through reference
    std::cout << "Pony power level: " << Pony::getponypower() << std::endl;
    return;
}

int     &Pony::getponypower(void) {
    return this->_power;
}

void    ponyOnTheStack(void) {
    Pony    pony;

    std::cout << "The pony is on the (hay)stack." << std::endl;
    pony.brush_pony();
    pony.ride_pony();
    pony.brush_pony();
    std::cout << "The pony gets off the (hay)stack." << std::endl;
    return;
}

void    ponyOnTheHeap(void) {
    Pony    *pony = new Pony;

    std::cout << "The pony is on the heap (of carrots)." << std::endl;
    pony->brush_pony();
    pony->ride_pony();
    pony->brush_pony();
    std::cout << "The pony gets off the heap (of carrots)." << std::endl;
    delete pony;
    return;
}
