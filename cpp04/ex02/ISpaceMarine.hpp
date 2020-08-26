/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:12:40 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 18:45:23 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACE_MARINE_H
#define ISPACE_MARINE_H

#include <iostream>
#include <new>

class ISpaceMarine {
public:
    virtual ~ISpaceMarine(void) {};

    virtual ISpaceMarine    *clone(void) const = 0;
    virtual void            battleCry(void) const = 0;
    virtual void            rangedAttack(void) const = 0;
    virtual void            meleeAttack(void) const = 0;
};

#endif