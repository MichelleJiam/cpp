/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:10:33 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:18:08 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main(void) {
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << "\n--- Finding extra victims ---" << std::endl;
    Victim      *john = new Peon("Johnny");
    Peon        joe2(joe);
    std::cout << *john << joe2;
    robert.polymorph(*john);
    robert.polymorph(joe2);
    delete john;
    return 0;
}
