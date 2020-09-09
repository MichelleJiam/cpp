/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:10:21 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 20:02:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_H
#define IDENTIFY_H

#include <ctime> // srand
#include <cstdlib> // srand on Linux
#include <exception> // exceptions
#include <iostream> // cout
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void);
void    identify_from_pointer(Base *p);
void    identify_from_reference(Base &p);

#endif