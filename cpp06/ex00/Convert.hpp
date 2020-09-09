/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:11:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 15:57:02 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <cctype> // isgraph
#include <cstdio> // scanf
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
    Convert(void);
    Convert(Convert const &other);
    Convert &operator=(Convert const &other);
    ~Convert(void);

    void        convertData(std::string &input);
    void        printData(void) const;

private:
    void        checkOverflow(std::string input);
    void        convertChar(void);
    void        convertDigit(void);
    Type        detectType(std::string &input);

    Type        _dataType;
    Flag        _flag;
    std::string _exceptions[4];
    char        _char;
    int         _int;
    float       _float;
    double      _double;
};

#endif