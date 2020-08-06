/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 21:03:42 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 21:06:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    Fixed       a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as int" << std::endl;
    std::cout << "b is " << b.toInt() << " as int" << std::endl;
    std::cout << "c is " << c.toInt() << " as int" << std::endl;
    std::cout << "d is " << d.toInt() << " as int" << std::endl;
    return 0;
}
