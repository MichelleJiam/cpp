/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   field.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:33:32 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 21:29:57 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

field::field(std::string name) : _name(name) {
}

field::~field(void) {
}

std::string	field::getvalue(int field) const {
	return this->_value;
}

void		field::setvalue(std::string input) {
	this->_value = input;
}