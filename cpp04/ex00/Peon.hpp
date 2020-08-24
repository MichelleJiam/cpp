/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:11:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/24 21:03:54 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
public:
    Peon(std::string name);
    Peon(Peon const &src);
    Peon &operator=(Peon const &rhs);
    ~Peon(void);

    virtual void    getPolymorphed(void) const;

private:
    Peon(void);
};

#endif