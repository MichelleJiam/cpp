/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:11:34 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/24 21:03:26 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>

class Victim {
public:
    Victim(std::string name);
    Victim(Victim const &src);
    Victim &operator=(Victim const &rhs);
    ~Victim(void);

    std::string     getName(void) const;
    virtual void    getPolymorphed(void) const;

private:
    Victim(void);

protected:
    std::string     _name;
};

std::ostream    &operator<<(std::ostream &o, Victim const &rhs);

#endif