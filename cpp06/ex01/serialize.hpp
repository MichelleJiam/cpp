/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:29:26 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/18 18:15:08 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <climits> // INT_MAX
#include <cstdlib> // rand on Linux
#include <cstring> // memcpy
#include <iostream> // cout & string

struct Data {
    std::string s1;
    int         n;
    std::string s2;
};

Data    *deserialize(void *raw);
void    *serialize(void);

#endif