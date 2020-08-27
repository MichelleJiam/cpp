/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 18:28:46 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/27 18:37:05 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) {
    return;
}

Character::Character(Character const &src) {
    return;
}

Character::~Character(void) {
    return;
}

Character           &Character::operator=(Character const &rhs) {
    return *this;
}

std::string const   &Character::getName(void) const {
    return;
}

void                Character::equip(AMateria *m) {
    if (m) { 
        for (int i = 0; i < 4; i++) {
            if (!this->_materia[i])
                this->_materia[i] == m;
        }
    }
    return;
}

void                Character::unequip(int idx) {
    return;
}

void                Character::use(int idx, ICharacter &target) {
    return;
}
