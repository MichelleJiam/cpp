/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:41:49 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:54:20 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB(void);

    void            attack(void) const;
    void            setWeapon(Weapon &weapon);

private:
    std::string     _name;
    Weapon const    *_weapon; 
        // const: _weapon itself is changeable as a ptr, but not what it points to
};

#endif