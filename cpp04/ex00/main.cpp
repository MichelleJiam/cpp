/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:10:33 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 15:00:50 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main(void) {
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");
    Victim      *john = new Peon("Johnny");
    Victim      joe2(joe);

    std::cout << robert << jim << joe << *john << joe2;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(*john);
    robert.polymorph(joe2);
    delete john;
    return 0;
}
