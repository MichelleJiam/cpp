/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:50:15 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 16:53:04 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _dataType(kInvalid), _flag(kNone) {
    return;
}

Convert::Convert(Convert const &other) {
    *this = other;
    return;
}

Convert &Convert::operator=(Convert const &other) {
    if (this != &other) {
        this->_dataType = other._dataType;
        this->_flag = other._flag;
        for (int i = 0; i < 4; i++)
            this->_exceptions[i] = other._exceptions[i];
        this->_char = other._char;
        this->_int = other._int;
        this->_float = other._float;
        this->_double = other._double;
    }
    return *this;
}

Convert::~Convert(void) {
    return;
}

void    Convert::convertData(std::string &input) {
    this->_dataType = detectType(input);
    if (this->_dataType == kInvalid)
        throw std::invalid_argument("Invalid type");
    if (this->_dataType == kChar)
        convertChar();
    else {
        checkOverflow(input);
        sscanf(input.c_str(), "%lf", &this->_double);
        if (this->_flag == kNone)
            convertDigit();
        else
            this->_float = static_cast<float>(this->_double);
    }
    return;
}

void    Convert::printData(void) const {
    std::cout << "char: ";
    if (this->_exceptions[kChar].empty())
        std::cout << this->_char << std::endl;
    else
        std::cout << this->_exceptions[kChar] << std::endl;
    std::cout << "int: ";
    if (this->_exceptions[kInt].empty())
        std::cout << this->_int << std::endl;
    else
        std::cout << this->_exceptions[kInt] << std::endl;
    std::cout << "float: ";
    if (this->_exceptions[kFloat].empty())
        std::cout << this->_float << "f" << std::endl;
    else
        std::cout << this->_exceptions[kFloat] << std::endl;
    std::cout << "double: ";
    if (this->_exceptions[kDouble].empty())
        std::cout << this->_double << std::endl;
    else
        std::cout << this->_exceptions[kDouble] << std::endl;
    return;
}

void    Convert::checkOverflow(std::string input) {
    long double tmp;

    sscanf(input.c_str(), "%Lf", &tmp);
    if (tmp < 0 || tmp > 127 || this->_flag == kNan)
        this->_exceptions[kChar] = "impossible";
    else if (!isgraph(tmp)) // isgraph excludes space, since we want "displayable" chars
        this->_exceptions[kChar] = "non-displayable";
    if (tmp > INT_MAX || tmp < INT_MIN || this->_flag == kNan)
        this->_exceptions[kInt] = "impossible";
    if (this->_flag != kInf && this->_flag != kNan) {
        if (tmp > __FLT_MAX__ || tmp < -(__FLT_MAX__))
            this->_exceptions[kFloat] = "impossible";
        if (tmp > __DBL_MAX__ || tmp < -(__DBL_MAX__))
            this->_exceptions[kDouble] = "impossible";
    }
    return;
}

void    Convert::convertChar(void) {
    this->_int = static_cast<int>(this->_char);
    this->_float = static_cast<float>(this->_char);
    this->_double = static_cast<double>(this->_char);
    return;
}

void    Convert::convertDigit(void) {
    if (this->_exceptions[kChar].empty())
        this->_char = static_cast<char>(this->_double);
    if (this->_exceptions[kInt].empty())
        this->_int = static_cast<int>(this->_double);
    if (this->_exceptions[kFloat].empty())
        this->_float = static_cast<float>(this->_double);
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
    for (size_t i = 0; i < input.length(); i++) {
        if (isdigit(input[i]) && type != kDouble && type != kFloat)
            type = kInt;
        else if (input[i] == '.' && type == kInt)
            type = kDouble;
        else if (input[i] == 'f' && type == kInt)
            type = kFloat;
    }
    return type;
}
