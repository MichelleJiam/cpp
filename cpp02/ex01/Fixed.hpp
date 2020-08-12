/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 20:41:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/11 13:33:32 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed(void);
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &src);
    Fixed &operator=(Fixed const &rhs);
    ~Fixed(void);

    int                 getRawBits(void) const;
    void                setRawBits(int const raw);

    float               toFloat(void) const;
    int                 toInt(void) const;

private:
    int                 _n;
    static int const    _bits;
};

std::ostream            &operator<<(std::ostream &o, Fixed const &rhs);

#endif