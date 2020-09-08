/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:50:15 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/08 18:18:56 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string &input) : _dataType(kInvalid), _flag(kNone) {
    // _types[0] = "%d";
    // _types[1] = "%f";
    // _types[2] = "%lf";
    // for (int i = 0; i < 3; i++)
    try {
        this->_dataType = detectType(input);
        if (this->_dataType == kInvalid)
            throw std::invalid_argument("Invalid type");
        convertData(input);
        printData();
    }
    catch (std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

Convert::~Convert(void) {
    return;
}

Type    Convert::detectType(std::string &input) {
    Type    type = kInvalid;

    if (input.length() == 1 && !isdigit(input[0])) {
        this->_char = input[0];
        return kChar;
    }
    else if (!input.compare("-inff") || !input.compare("+inff")) {
        this->_flag = kInf;
        return kFloat;
    }
    else if (!input.compare("-inf") || !input.compare("+inf")) {
        this->_flag = kInf;
        return kDouble;
    }
    else if (!input.compare("nanf")) {
        this->_flag = kNan;
        return kFloat;
    }
    else if (!input.compare("nan")) {
        this->_flag = kNan;
        return kDouble;
    }
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i]) && type != kDouble && type != kFloat)
            type = kInt;
        else if (input[i] == '.' && type == kInt)
            type = kDouble;
        else if (input[i] == 'f' && type == kInt)
            type = kFloat;
    }
    return type;
}

void    Convert::convertData(std::string &input) {
    if (this->_dataType == kChar)
        convertChar(this->_char);
    else if (this->_flag == kNone)
        convertDigit(input);
    else
        convertSpecial();
    return;
}

void    Convert::convertChar(char c) {
    this->_int = static_cast<int>(c);
    this->_float = static_cast<float>(c);
    this->_double = static_cast<double>(c);
    return;
}

void    Convert::convertDigit(std::string &input) {
    sscanf(input.c_str(), "%lf", &this->_double);
    if (this->_double < 0 || this->_double > 127)
        this->_exceptions[kChar] = "impossible";
    else if (!isgraph(this->_double))
        this->_exceptions[kChar] = "non-displayable";
    else
        this->_char = static_cast<char>(this->_double);
    if (this->_double > INT_MAX || this->_double < INT_MIN)
        this->_exceptions[kInt] = "impossible";
    else
        this->_int = static_cast<int>(this->_double);
    if (this->_double > __FLT_MAX__ || this->_double < __FLT_MIN__ )
        this->_exceptions[kFloat] = "impossible";
    else
        this->_float = static_cast<float>(this->_double);
    return;
}

