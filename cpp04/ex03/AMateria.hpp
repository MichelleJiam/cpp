/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:40:15 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:25:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <new>
#include "ICharacter.hpp"

class AMateria {
public:
    AMateria(std::string const &type);
    AMateria(AMateria const &src);
    AMateria &operator=(AMateria const &rhs);
    virtual ~AMateria(void);

    std::string const   &getType(void) const;
    unsigned int        getXP(void) const;

    virtual AMateria    *clone(void) const = 0;
    virtual void        use(ICharacter &target);

protected:
    void                setType(std::string const &type);
    void                setXP(unsigned int n);

private:
    AMateria(void);

    unsigned int        _xp;
    std::string         _type;
};

#endif