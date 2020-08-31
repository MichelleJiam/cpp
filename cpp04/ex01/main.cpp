/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 20:12:38 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:10:13 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void) {
    Character   *me = new Character("me");

    std::cout << *me;

    Enemy       *b = new RadScorpion();
    AWeapon     *pr = new PlasmaRifle();
    AWeapon     *pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    std::cout << "\n--- New challenger and enemy emerge! ---" << std::endl;

    Enemy       *c = new SuperMutant();
    Character   newb("newbie");

    std::cout << newb;
    newb.attack(c);
    newb.equip(pf);
    std::cout << newb;
    std::cout << *me;
    newb.attack(c);
    newb.attack(c);
    newb.recoverAP();
    newb.recoverAP();
    newb.attack(c);
    newb.attack(c);
    std::cout << "Mission completed" << std::endl;
    return 0;
}
