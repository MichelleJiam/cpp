/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:41:20 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:54:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void            attack(void) const;

private:
    std::string     _name;
    Weapon const    &_weapon;
        // const: _weapon itself is changeable as a ref, but not what it refers to
};

#endif