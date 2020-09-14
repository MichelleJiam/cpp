/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Awesome.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 19:18:39 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 19:34:56 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome( int n ) : _n( n ) {
}

bool Awesome::operator==( Awesome const & rhs ) const {
    return (this->_n == rhs._n);
}

bool Awesome::operator!=( Awesome const & rhs ) const {
    return (this->_n != rhs._n);
}

bool Awesome::operator>( Awesome const & rhs ) const {
    return (this->_n > rhs._n);
}

bool Awesome::operator<( Awesome const & rhs ) const {
    return (this->_n < rhs._n);
}

bool Awesome::operator>=( Awesome const & rhs ) const {
    return (this->_n >= rhs._n);
}

bool Awesome::operator<=( Awesome const & rhs ) const {
    return (this->_n <= rhs._n);
}

void Awesome::print_n(void) {
	std::cout << this->_n << std::endl;
}

int Awesome::get_n(void) {
	return this->_n;
}

std::ostream& operator<<(std::ostream& o, Awesome& a) {
	o	<< a.get_n() << std::endl;
	return o;
}
