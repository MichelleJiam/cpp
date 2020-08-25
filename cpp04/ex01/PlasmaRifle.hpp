/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:16:54 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 17:30:21 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
#define PLASMA_RIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const &src);
    PlasmaRifle &operator=(PlasmaRifle const &rhs);
    ~PlasmaRifle(void);

    void    attack(void) const;
};

#endif