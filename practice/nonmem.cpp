/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nonmem.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:13:00 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 18:26:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "nonmem.hpp"

// when dealing with non-member items, you don't use "this" but instead
// (name of the class)::(item)
test::test(void) {
    std::cout << "Constructor summoned" << std::endl;
    test::_nbinst += 1;
    return;
}

test::~test(void) {
    std::cout << "Destructor summoned" << std::endl;
    test::_nbinst -= 1;
    return;
}

int     test::getnbinst(void) {
    return test::_nbinst;
}

int test::_nbinst = 0; // this is the only way to initialise a non-member attribute


// main

void    f0(void) {
    test instance2;
    std::cout << "Number of instances: " << test::getnbinst() << std::endl;
    return;
}

void    f1(void) {
    test instance;
    std::cout << "Number of instances: " << test::getnbinst() << std::endl;
    f0();
    return;
}

int     main() {
    std::cout << "Number of instances: " << test::getnbinst() << std::endl;
    f1();
    std::cout << "Number of instances: " << test::getnbinst() << std::endl;
    return 0;
}