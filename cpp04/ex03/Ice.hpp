/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:40:11 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/27 17:58:34 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice(void);
    Ice(Ice const &src);
    Ice &operator=(Ice const &rhs);
    ~Ice(void);

    AMateria    *clone(void) const;
    void        use(ICharacter &target);
};

#endif