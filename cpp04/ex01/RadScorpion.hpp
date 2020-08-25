/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:15:29 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 19:31:55 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
#define RAD_SCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion(void);
    RadScorpion(RadScorpion const &src);
    RadScorpion &operator=(RadScorpion const &rhs);
    ~RadScorpion(void);

    void    takeDamage(int damage);
};

#endif