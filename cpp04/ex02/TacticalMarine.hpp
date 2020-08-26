/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 15:12:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 18:52:07 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_H
#define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine(void);
    TacticalMarine(TacticalMarine const &src);
    TacticalMarine &operator=(TacticalMarine const &rhs);
    ~TacticalMarine(void);

    ISpaceMarine    *clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};

#endif