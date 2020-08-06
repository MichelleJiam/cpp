/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canon.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 18:33:15 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 18:43:48 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "canon.hpp"

int main(void) {
    Sample  instance1;
    Sample  instance2(42);
    Sample  instance3(instance1);

    std::cout << instance1 << std::endl;
    std::cout << instance2 << std::endl;
    std::cout << instance3 << std::endl;

    instance3 = instance2;
    std::cout << instance3 << std::endl;
    return 0;
}
