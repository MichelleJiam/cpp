/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 21:02:15 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 21:29:35 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    this->_n = n * (1 << this->_bits);
    return;
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(f * (1 << this->_bits)); // rounds to nearest integral
    return;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed           &Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return *this;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}

int             Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void            Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;
    return;
}

float           Fixed::toFloat(void) const {
    return static_cast<float>(this->_n) / (1 << this->_bits);
}

int             Fixed::toInt(void) const {
    return this->_n / (1 << this->_bits);
}

int const Fixed::_bits = 8;
