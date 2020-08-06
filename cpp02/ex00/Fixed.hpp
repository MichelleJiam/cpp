/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 20:41:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 20:44:23 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
public:
    Fixed(void);
    Fixed(Fixed const &src);
    Fixed &operator=(Fixed const &rhs);
    ~Fixed(void);

    int                 getRawBits(void) const;
    void                setRawBits(int const raw);

private:
    int                 _n;
    static int const    _bits;
};

#endif