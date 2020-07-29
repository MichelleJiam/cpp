/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   class.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:46:54 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 13:08:34 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

test::test(void) {
    std::cout << "Constructor summoned" << std::endl;
    return;
}

test::~test(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

void    test::fn(void) {
    std::cout << "Member function called: fn" << std::endl;
    return;
}

void    test::valuechange(test *inst, int n) {
    inst->value = n;
    std::cout << "Member function called: valuechange" << std::endl;
    std::cout << "instance.value is now: " << inst->value << std::endl;
    return;
}

int main() {
    test    instance;

    instance.value = 0;
    std::cout << "instance.value: " << instance.value << std::endl;
    instance.value = 42;
    std::cout << "instance.value: " << instance.value << std::endl;
    instance.fn();
    instance.valuechange(&instance, 13);
    return 0;
}