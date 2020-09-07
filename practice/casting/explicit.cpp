/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   explicit.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 15:22:08 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/07 15:31:03 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// "explicit" controls unwanted implicit type conversions. It can only be used
// in declarations of constructors within a class declaration.

#include <iostream>

class A {};
class B {};

class C {
public:
                C(A const &_) {return;}
    explicit    C(B const &_) {return;}
};

void    f(C const &_) {
    return;
}

int     main(void) {
    f(A()); // implicit conversion -> OK
    f(B()); // implicit conversion -> Not OK, constructor taking B is explicit
    f((C)B()); 
    return 0;
}