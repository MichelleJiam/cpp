/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:40:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 17:31:26 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character(std::string const &name);
    Character(Character const &src);
    Character &operator=(Character const &rhs);
    virtual ~Character(void);

    std::string const   &getName(void) const;
    void                destroyMateria(void);
    void                equip(AMateria *m);
    void                unequip(int idx);
    void                use(int idx, ICharacter &target);

private:
    Character(void);
    
    AMateria    *_materia[4];
    std::string _name;
};

#endif