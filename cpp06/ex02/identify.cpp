/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   identify.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:10:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/22 17:39:38 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base    *generate(void) {
    switch (rand() % 3) {
        case 0: {
            std::cout << "A generated" << std::endl;
            return new A;
        }
        case 1: {
            std::cout << "B generated" << std::endl;
            return new B;
        }
        case 2: {
            std::cout << "C generated" << std::endl;
            return new C;
        }
        default: return NULL;
    }
}

void    identify_from_pointer(Base *p) {
    A   *a = dynamic_cast<A*>(p);
    B   *b = dynamic_cast<B*>(p);
    C   *c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
    else
        return;
}

void    identify_from_reference(Base &p) {
    try {
        A   &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::exception &e) {}
    try {
        B   &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::exception &e) {}
    try {
        C   &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch (std::exception &e) {}
    return;
}
