/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 18:58:33 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/26 18:58:35 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_H
#define ASSAULT_TERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator(void);
    AssaultTerminator(AssaultTerminator const &src);
    AssaultTerminator &operator=(AssaultTerminator const &rhs);
    ~AssaultTerminator(void);

    ISpaceMarine    *clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};

#endif