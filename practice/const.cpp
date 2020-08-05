/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   const.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:59:45 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 14:32:38 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "const.hpp"

// variable (pi) is initialised to f and var (value) is initialised to 42
test::test(float const f) : pi(f), value(42) {
    std::cout << "Constructor summoned" << std::endl;
    return;
}

test::~test(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

const test *test::identifyptr(void) const {
    return this;
}

// const test &test::identifyref(void) const {
//     return this->pi;
// }

// by placing "const" before the opening {, this member function won't
// alter the current instance of the class. This should always be done if the
// member function isn't supposed to change the instance.
void    test::fn(void) const {
    std::cout << "this->pi: " << this->pi << std::endl;
    std::cout << "this->value: " << this->value << std::endl;
    std::cout << "const pi's address: " << &this->pi << std::endl;
    std::cout << "const pi's address: " << this->identifyptr() << std::endl;
    // this->value = 0; 
        // because const is declared, the value is not modifiable
        // and is therefore protected from unwanted changes.
}

int main() {
    test instance(3.142f);
    instance.fn();
    // std::cout << "const pi's address: " << instance.identifyref().identifyptr() << std::endl;
    return 0;
}