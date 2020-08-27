/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:40:09 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/27 17:58:42 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure(void);
    Cure(Cure const &src);
    Cure &operator=(Cure const &rhs);
    ~Cure(void);

    AMateria    *clone(void) const;
    void        use(ICharacter &target);
};

#endif