/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 18:28:46 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:15:37 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
    return;
}

Character::Character(std::string const &name) : _name(name) {
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    return;
}

Character::Character(Character const &src) {
    *this = src;
    return;
}

Character::~Character(void) {
    this->_destroyMateria();
    return;
}

Character           &Character::operator=(Character const &rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_destroyMateria();
        for (int i = 0; i < 4; i++) {
            if (rhs._materia[i])
                this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return *this;
}

std::string const   &Character::getName(void) const {
    return this->_name;
}

void                Character::equip(AMateria *m) {
    if (!m)
        std::cout << "Trying to equip nonexistent Materia" << std::endl;
    else { 
        for (int i = 0; i < 4; i++) {
            if (i == 3 && this->_materia[i])
                std::cout << "Character cannot learn more Materia" << std::endl;
            else if (!this->_materia[i]) {
                this->_materia[i] = m;
                std::cout << "<" << m->getType() << "> equipped" << std::endl;
                break;
            }
        }
    }
    return;
}

void                Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        std::cout << "<" << this->_materia[idx]->getType() << "> unequipped" << std::endl;
        this->_materia[idx] = NULL;
    }
    return;
}

void                Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && this->_materia[idx])
        this->_materia[idx]->use(target);
    return;
}

void                Character::_destroyMateria(void) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i])
            delete this->_materia[i];
        this->_materia[i] = NULL;
    }
    return;
}
