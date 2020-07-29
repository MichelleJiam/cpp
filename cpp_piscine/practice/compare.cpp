/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   compare.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:56:34 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 18:04:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "compare.hpp"

test::test(int v) : _value(v) {
    std::cout << "Constructor summoned" << std::endl;
    return;
}

test::~test(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

int test::getvalue(void) const {
    return this->_value;
}

int test::compare(test *other) const {
    if (this->_value < other->getvalue())
        return -1;
    else if (this->_value > other->getvalue())
        return 1;
    return 0;
}

int main() {
    test instance1(42);
    test instance2(42); // different addresses, same content

    if (&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;
    if (instance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance2 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not structurally equal" << std::endl;
    return 0;
}