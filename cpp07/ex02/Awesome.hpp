/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Awesome.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 19:17:34 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/15 15:51:17 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_H
# define AWESOME_H

#include <iostream>

class Awesome {
public:
    Awesome( void );

    int     get(void) const;

private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &a);

#endif