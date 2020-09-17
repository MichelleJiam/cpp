/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Awesome.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 19:18:39 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/15 15:52:43 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome( void ) : _n( 42 ) {
    return;
}

int Awesome::get(void) const {
	return this->_n;
}

std::ostream &operator<<(std::ostream &o, Awesome const &a) {
	o	<< a.get();
	return o;
}
