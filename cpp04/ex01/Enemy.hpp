/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:16:14 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 20:45:45 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
public:
    Enemy(int hp, std::string const &type);
    Enemy(Enemy const &src);
    Enemy &operator=(Enemy const &rhs);
    virtual ~Enemy(void);

    std::string     getType(void) const;
    int             getHP(void) const;
    virtual void    takeDamage(int damage);

private:
    Enemy(void);

protected:
    std::string     _type;
    int             _hp;
};

#endif