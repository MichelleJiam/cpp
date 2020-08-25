/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:11:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 17:10:43 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const &src);
    Sorcerer &operator=(Sorcerer const &rhs);
    ~Sorcerer(void);

    std::string getName(void) const;
    std::string getTitle(void) const;
    void        polymorph(Victim const &target) const;

private:
    Sorcerer(void);

    std::string _name;
    std::string _title;
};

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif