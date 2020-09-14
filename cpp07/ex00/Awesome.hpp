/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Awesome.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 19:17:34 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 19:34:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_H
# define AWESOME_H

#include <iostream>

class Awesome {
public:
    Awesome( int n );

    bool    operator==( Awesome const & rhs ) const;
    bool    operator!=( Awesome const & rhs ) const;
    bool    operator>( Awesome const & rhs ) const;
    bool    operator<( Awesome const & rhs ) const;
    bool    operator>=( Awesome const & rhs ) const;
    bool    operator<=( Awesome const & rhs ) const;
    void    print_n(void);
    int     get_n(void);

private:
    int _n;
};

std::ostream& operator<<(std::ostream& o, Awesome& a);

#endif