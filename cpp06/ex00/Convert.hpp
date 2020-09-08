/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:11:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/08 18:05:04 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <cctype> // isgraph
#include <cstdio> // scanf
#include <cstdlib> // atoi
#include <exception> // exceptions
#include <iostream> // cout
#include <climits> // min/max for data types
#include <stdexcept> // invalid_argument

enum    Type {
    kChar = 0,
    kInt,
    kFloat,
    kDouble,
    kInvalid,
};

enum    Flag {
    kNone = 0,
    kInf,
    kNan,
};

class Convert {
public:
    Convert(std::string &input);
    ~Convert(void);



private:
    Convert(void);
    Type        detectType(std::string &input);
    void        convertData(std::string &input);
    void        convertChar(char c);
    void        convertDigit(std::string &input);
    void        convertSpecial(void);
    void        printData(void) const;
    // std::string _types[3];
    Type        _dataType;
    Flag        _flag;
    std::string _exceptions[4];
    char        _char;
    int         _int;
    float       _float;
    double      _double;
};

#endif