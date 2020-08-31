/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 18:02:32 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 17:43:50 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
    return;
}

AMateria::AMateria(std::string const &type) : _xp(0), _type(type){
    return;
}

AMateria::AMateria(AMateria const &src) {
    *this = src;
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
    (void)target;
    this->setXP(this->_xp + 10);
    std::cout << "Skill XP gained. Current skill level: " << this->_xp << std::endl;
    return;
}
