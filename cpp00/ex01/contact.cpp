/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:17:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 21:30:54 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.hpp"
#include "field.hpp"

contact::contact(void) {
    std::cout << "Creating contact" << std::endl;
    this->_fields[0] = field("first name");
    this->_fields[1] = field("last name");
    this->_fields[2] = field("nickname");
    this->_fields[3] = field("login");
    this->_fields[4] = field("postal address");
    this->_fields[5] = field("email address");
    this->_fields[6] = field("phone number");
    this->_fields[7] = field("date of birth");
    this->_fields[8] = field("favourite meal");
    this->_fields[9] = field("underwear colour");
    this->_fields[10] = field("darkest secret");
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
//     switch (field) {
//         case 0: return this->_firstname;
//         case 1: return this->_lastname;
//         case 2: return this->_nickname;
//         case 3: return this->_login;
//         case 4: return this->_address;
//         case 5: return this->_email;
//         case 6: return this->_phone;
//         case 7: return this->_dob;
//         case 8: return this->_meal;
//         case 9: return this->_underwear;
//         case 10: return this->_secret;
//     }
//     return "Error: out of bounds";
        this->_fields[field].getvalue(field);
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
//     switch (field) {
//         case 0: this->_firstname = input;
//                 break;
//         case 1: this->_lastname = input;
//                 break;
//         case 2: this->_nickname = input;
//                 break;
//         case 3: this->_login = input;
//                 break;
//         case 4: this->_address = input;
//                 break;
//         case 5: this->_email = input;
//                 break;
//         case 6: this->_phone = input;
//                 break;
//         case 7: this->_dob = input;
//                 break;
//         case 8: this->_meal = input;
//                 break;
//         case 9: this->_underwear = input;
//                 break;
//         case 10: this->_secret = input;
//                 break;
//     }
        this->_fields[field].setvalue(input);
        return;
}
