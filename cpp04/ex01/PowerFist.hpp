/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:16:35 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 20:48:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
#define POWER_FIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
    PowerFist(void);
    PowerFist(PowerFist const &src);
    PowerFist &operator=(PowerFist const &rhs);
    ~PowerFist(void);

    void    attack(void) const;
};

#endif