/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pubpriv.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:23:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:30:33 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "pubpriv.hpp"

test3::test3(void) {
    std::cout << "Constructor summoned" << std::endl;
    this->publicvar = 0;
    std::cout << "this->publicvar: " << this->publicvar << std::endl;
    this->_privatevar = 0;
    std::cout << "this->_privatevar: " << this->_privatevar << std::endl;

    this->publicfn();
    this->_privatefn();
    return;
}

test3::~test3(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

void    test3::publicfn(void) const {
    std::cout << "Member function called: publicfn" << std::endl;
    return;
}

void    test3::_privatefn(void) const {
    std::cout << "Member function called: _privatefn" << std::endl;
    return;
}

int     main() {
    test3 instance;

    instance.publicvar = 42;
    std::cout << "instance.publicvar: " << instance.publicvar << std::endl;
    instance.publicfn();
    // instance._privatevar = 42;
    // std::cout << "instance._privatevar: " << instance._privatevar << std::endl;
    // instance._privatefn();
        // uncommenting these will cause a compilation error because of attempted
        // modification outside the class.
    return 0;
}