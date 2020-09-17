/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:12:04 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:17:36 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    return;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
    *this = src;
    return;
}

MateriaSource::~MateriaSource(void) {
    this->_destroyMateria();
    return;
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &rhs) {
    if (this != &rhs) {
        this->_destroyMateria();
        for (int i = 0; i < 4; i++) {
            if (rhs._materia[i])
                this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return *this;
}

void            MateriaSource::learnMateria(AMateria *materia) {
    if (!materia)
        std::cout << "Trying to learn nonexistent Materia" << std::endl;
    else { 
        for (int i = 0; i < 4; i++) {
            if (i == 3 && this->_materia[i])
                std::cout << "Source cannot learn more Materia" << std::endl;
            else if (!this->_materia[i]) {
                this->_materia[i] = materia;
                std::cout << "<" << materia->getType() << "> learned" << std::endl;
                break;
            }
        }
    }
    return;
}

AMateria        *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
    }
    return NULL;
}

void            MateriaSource::_destroyMateria(void) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i])
            delete this->_materia[i];
        this->_materia[i] = NULL;
    }
    return;
}
