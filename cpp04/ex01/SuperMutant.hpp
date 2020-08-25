/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:15:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 18:09:13 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
#define SUPER_MUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
    SuperMutant(void);
    SuperMutant(SuperMutant const &src);
    SuperMutant &operator=(SuperMutant const &rhs);
    ~SuperMutant(void);

    void    takeDamage(int damage);
};

#endif