/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:40:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:54:00 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon(void);

    std::string const   &getType(void) const;
    void                setType(std::string type);

private:
    std::string         _type;
};

#endif