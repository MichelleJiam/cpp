/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   const.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:59:45 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 18:28:07 by mjiam         ########   odam.nl         */
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

// by placing "const" before the opening {, this member function won't
// alter the current instance of the class. This should always be done if the
// member function isn't supposed to change the instance.
void    test::fn(void) const {
    std::cout << "this->pi: " << this->pi << std::endl;
    std::cout << "this->value: " << this->value << std::endl;
    // this->value = 0; 
        // because const is declared, the value is not modifiable
        // and is therefore protected from unwanted changes.
}

int main() {
    test instance(3.142f);
    instance.fn();
    return 0;
}