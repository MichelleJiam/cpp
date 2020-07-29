/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:12:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 14:16:12 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void) {
    std::cout << "Pony created" << std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Pony culled" << std::endl;
    return;
}