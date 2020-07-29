/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pointer.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:28:36 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 18:38:55 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

test::test(void) : value(0) {
    std::cout << "Constructor summoned" << std::endl;
    return;
}

test::~test(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

void    test::fn(void) const {
    std::cout << "Member function called: fn" << std::endl;
    return;
}

int main() {
    test    instance;
    test    *instance_p = &instance;

    int     test::*p = NULL; // p is a pointer to an integer member of test
    void    (test::*f)(void) const; // f is a pointer to a function member of test

    p = &test::value;
    std::cout << "Value of member value: " << instance.value << std::endl;
    instance.*p = 21;
    std::cout << "Value of member value: " << instance.value << std::endl;
    instance_p->*p = 42;
    std::cout << "Value of member value: " << instance.value << std::endl;
    f = &test::fn;
    (instance.*f)();
    (instance_p->*f)();
    return 0;
}