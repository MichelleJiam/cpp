/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 13:15:52 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:14:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "list.hpp"

test1::test1(char p1, int p2, float p3) : var1(p1), var2(p2), var3(p3) {
    std::cout << "Constructor summoned" << std::endl;
    std::cout << "this->var1: " << this->var1 << std::endl;
    std::cout << "this->var2: " << this->var2 << std::endl;
    std::cout << "this->var3: " << this->var3 << std::endl;
}

test1::~test1(void) {
    std::cout << "Destructor summoned" << std::endl;
    return;
}

int main() {
    test1 instance1('m', 42, 4.2f);
    test1 instance2('M', 13, 3.142f);
    return 0;
}