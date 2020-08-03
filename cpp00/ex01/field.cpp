/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   field.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:33:32 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 12:41:43 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

field::field(void){
}

field::~field(void) {
}

std::string	field::getname(void) const {
	return this->_name;
}

std::string	field::getvalue(void) const {
	return this->_value;
}

void		field::setname(std::string name) {
	this->_name = name;
}

void		field::setvalue(std::string input) {
	this->_value = input;
}