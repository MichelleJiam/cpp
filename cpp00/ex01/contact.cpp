/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:17:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 12:42:05 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.hpp"
#include "field.hpp"

contact::contact(void) {
    std::cout << "Creating contact" << std::endl;
    this->_fields[0].setname("first name");
    this->_fields[1].setname("last name");
    this->_fields[2].setname("nickname");
    this->_fields[3].setname("login");
    this->_fields[4].setname("postal address");
    this->_fields[5].setname("email address");
    this->_fields[6].setname("phone number");
    this->_fields[7].setname("date of birth");
    this->_fields[8].setname("favourite meal");
    this->_fields[9].setname("underwear colour");
    this->_fields[10].setname("darkest secret");
    return;
}

contact::~contact(void) {
    std::cout << "Destroying contact" << std::endl;
    return;
}

int         contact::getindex(void) const {
    return this->_index;
}

std::string contact::getinformation(int field) const {
    return this->_fields[field].getvalue();
}

std::string contact::printfield(int field) const {
    return this->_fields[field].getname();
}

void        contact::showinformation(std::string input) const {
    std::cout << "|";
    if (input.length() > 10) {
        input.resize(9);
        input.resize(10, '.');
    }
    std::cout << std::setw(10) << input;
}

void        contact::setindex(int index) {
    this->_index = index;
    return;
}

void        contact::setinformation(std::string input, int field) {
    this->_fields[field].setvalue(input);
    return;
}
