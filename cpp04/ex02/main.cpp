/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:04:03 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:18:24 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main(void) {
    ISpaceMarine    *bob = new TacticalMarine;
    ISpaceMarine    *jim = new AssaultTerminator;
    ISquad          *vlc = new Squad;
    
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); i++) {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "\n--- Reinforcements have arrived ---" << std::endl;
    Squad           vlc2;
    Squad           vlc3;
    ISpaceMarine    *tom = new AssaultTerminator;
    ISpaceMarine    *tim = new TacticalMarine;
    ISpaceMarine    *tess = tom->clone();
    vlc2.push(tom);
    vlc3.push(tim);
    vlc3.push(tess);
    std::cout << "Units in second squad: " << vlc2.getCount() << std::endl;
    std::cout << "First unit of second squad: ";
    (vlc2.getUnit(0))->battleCry();
    std::cout << "Units in third squad: " << vlc3.getCount() << std::endl;
    (vlc3.getUnit(0))->battleCry();
    (vlc3.getUnit(1))->battleCry();
    std::cout << "--- Squad transfer initiated ---" << std::endl;
    vlc2 = vlc3;
    std::cout << "Units in second squad: " << vlc2.getCount() << std::endl;
    std::cout << "First unit of second squad: ";
    (vlc2.getUnit(0))->battleCry();
    delete vlc;
    return 0;
}
