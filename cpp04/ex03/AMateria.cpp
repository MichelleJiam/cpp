/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 18:02:32 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/27 18:15:15 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
    return;
}

AMateria::AMateria(AMateria const &src) {
    this->_type = src._type;
    this->_xp = src._xp;
    return;
}

AMateria::~AMateria(void) {
    return;
}

AMateria            &AMateria::operator=(AMateria const &rhs) {
    if (this != &rhs) {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
    return *this;
}

std::string const   &AMateria::getType(void) const {
    return this->_type;
}

unsigned int        AMateria::getXP(void) const {
    return this->_xp;
}

void                AMateria::setType(std::string const &type) {
    this->_type = type;
    return;
}

void                AMateria::setXP(unsigned int n) {
    this->_xp = n;
    return;
}

void                AMateria::use(ICharacter &target) {
    this->setXP(this->_xp + 10);
    return;
}
