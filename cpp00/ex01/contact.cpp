/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:17:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/28 18:58:40 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.hpp"

contact::contact(void) {
    std::cout << "Creating contact" << std::endl;
    return;
}

contact::~contact(void) {
    std::cout << "Destroying contact" << std::endl;
    return;
}

int         contact::getindex(void) const {
    return this->_index;
}

void        contact::setindex(int index) {
    this->_index = index;
    return;
}

std::string contact::getinformation(int field) const {
    switch (field) {
        case 0: return this->_firstname;
        case 1: return this->_lastname;
        case 2: return this->_nickname;
        case 3: return this->_login;
        case 4: return this->_address;
        case 5: return this->_email;
        case 6: return this->_phone;
        case 7: return this->_dob;
        case 8: return this->_meal;
        case 9: return this->_underwear;
        case 10: return this->_secret;
    }
    return "Error: out of bounds";
}

void        contact::showinformation(std::string input) const {
    std::cout << "|";
    if (input.length() > 10) {
        input.resize(9);
        input.resize(10, '.');
    }
    std::cout << std::setw(10) << input;
}

void        contact::setinformation(std::string input, int field) {
    switch (field) {
        case 0: this->_firstname = input;
                break;
        case 1: this->_lastname = input;
                break;
        case 2: this->_nickname = input;
                break;
        case 3: this->_login = input;
                break;
        case 4: this->_address = input;
                break;
        case 5: this->_email = input;
                break;
        case 6: this->_phone = input;
                break;
        case 7: this->_dob = input;
                break;
        case 8: this->_meal = input;
                break;
        case 9: this->_underwear = input;
                break;
        case 10: this->_secret = input;
                break;
    }
    return;
}
