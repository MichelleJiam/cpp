/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:11:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/07 17:51:40 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <cstdlib>
#include <exception>
#include <iostream>

class Convert {
public:
    Convert(std::string number);
    ~Convert(void);

private:
    std::string _char;
    int         _int;
    float       _float;
    double      _double;
};

#endif