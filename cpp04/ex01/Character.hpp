/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:15:10 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/01 16:39:35 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
public:
    Character(std::string const &name);
    Character(Character const &src);
    Character &operator=(Character const &rhs);
    ~Character(void);

    int             getAP(void) const;
    std::string     getName(void) const;
    std::string     getWeapon(void) const;
    void            recoverAP(void);
    void            equip(AWeapon *weapon);
    void            attack(Enemy *enemy);

private:
    Character(void);

    std::string     _name;
    int             _ap;
    AWeapon const   *_weapon;
};

std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif