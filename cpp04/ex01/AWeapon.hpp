/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:17:12 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 17:11:23 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon {
public:
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(AWeapon const &src);
    AWeapon &operator=(AWeapon const &rhs);
    virtual ~AWeapon(void);

    std::string     getName(void) const;
    int             getAPCost(void) const;
    int             getDamage(void) const;
    virtual void    attack(void) const = 0;

private:
    AWeapon(void);

protected:
    std::string     _name;
    int             _apcost;
    int             _damage;
};

#endif