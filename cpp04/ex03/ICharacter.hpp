/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:39:47 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 16:04:12 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>

class AMateria; // forward declaration to avoid include conflict

class ICharacter {
public:
    virtual ~ICharacter(void) {};

    virtual std::string const   &getName(void) const = 0;
    virtual void                equip(AMateria *m) = 0;
    virtual void                unequip(int idx) = 0;
    virtual void                use(int idx, ICharacter &target) = 0;
};

#endif