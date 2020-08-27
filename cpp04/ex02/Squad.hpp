/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:12:08 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/27 17:18:03 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad {
public:
    Squad(void);
    Squad(Squad const &src);
    Squad &operator=(Squad const &rhs);
    virtual ~Squad(void);

    int             getCount(void) const;
    ISpaceMarine    *getUnit(int n) const;
    int             push(ISpaceMarine *unit);

private:
    int             _count;
    ISpaceMarine    **_units;

    void            _clear(ISpaceMarine **array);
    ISpaceMarine    **_copy(Squad const &src);
};

#endif