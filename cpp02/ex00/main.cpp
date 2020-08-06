/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 20:37:19 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 20:45:04 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    Fixed   a;
    Fixed   b(a);
    Fixed   c;

    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    a.setRawBits(42);
    std::cout << a.getRawBits() << std::endl;
    return 0;
}