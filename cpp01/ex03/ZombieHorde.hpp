/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 21:00:21 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 21:31:45 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
public:
    ZombieHorde(int N);
    ~ZombieHorde(void);

    void    announce(void) const;

private:
    Zombie      *_zombies;
    std::string zombieNamer(void);
};

#endif