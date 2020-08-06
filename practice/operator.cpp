/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operator.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 17:52:13 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 18:25:38 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "operator.hpp"

int main(void) {
    Integer x(30);
    Integer y(10);
    Integer z(0);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    y = Integer(12);
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    z = x + y;
    std::cout << "z: " << z << std::endl;
    return 0;
}