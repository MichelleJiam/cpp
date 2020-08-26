/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:12:42 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 18:45:33 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
#define ISQUAD_H

#include <iostream>
#include <new>
#include "ISpaceMarine.hpp"

class ISquad {
public:
    virtual ~ISquad(void) {};

    virtual int             getCount(void) const = 0;
    virtual ISpaceMarine    *getUnit(int n) const = 0;
    virtual int             push(ISpaceMarine *unit) = 0;
};

#endif