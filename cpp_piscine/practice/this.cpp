/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   this.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 13:09:52 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 13:12:42 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

test::test(void) {
    std::cout << "Constructor summoned" << std::endl;
    this->value = -42;
    std::cout << "instance.value: " << this->value << std::endl;
    this->value = 21;
    std::cout << "instance.value: " << this->value << std::endl;
    this->fn();
    this->valuechange(this, 15);
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
    test instance;
    return 0;
}