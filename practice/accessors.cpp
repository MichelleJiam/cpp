/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   accessors.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:45:40 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:53:15 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "accessors.hpp"

test::test(void) {
    std::cout << "Constructor summoned" << std::endl;
    this->setvalue(0);
    std::cout << "this->getvalue: " << this->getvalue() << std::endl;
    return;
}

test::~test(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

int     test::getvalue(void) const {
    return this->_value;
}

void    test::setvalue(int v) {
    if (v >= 0)
        this->_value = v;
    // does nothing is v is not valid, but practically should have error handling
    return;
}

int     main() {
    test    instance;

    instance.setvalue(42);
    std::cout << "instance.getvalue: " << instance.getvalue() << std::endl;
    instance.setvalue(-42);
    std::cout << "instance.getvalue: " << instance.getvalue() << std::endl;
    return 0;
}