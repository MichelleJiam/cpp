/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dynamiccast.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 21:08:34 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 21:22:21 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Dynamic casts are done at runtime, rather than at compilation as with static
// so it may compile, but fail at runtime. So checks have to be done within
// the program to catch dynamic cast fails.
// Dynamic casting is used with subtype polymorphism, meaning at least one of 
// the member functions have to be virtual.

#include <iostream>
#include <typeinfo>
#include <exception>

class   Parent {public: virtual ~Parent() {}};
class   Child1: public Parent {};
class   Child2: public Parent {};

int main() {
    Child1  a;
    Parent  *b = &a; // implicit upcast -> OK

    // explicit downcast
    Child1  *c = dynamic_cast<Child1 *>(b);
        // unlike a reference, a NULL pointer can be returned
    if (c == NULL)
        std::cout << "Conversion is -not- OK" << std::endl;
    else
        std::cout << "Conversion is OK" << std::endl;
    // this will work because the actual type hidden behind Parent is Child1

    // explicit downcast
    try {
        Child2  &d = dynamic_cast<Child2 &>(*b);
            // a reference can never be NULL, so we can catch it as an exception
        std::cout << "Conversion is OK" << std::endl;
    }
    catch (std::bad_cast &bc) {
        std::cout << "Conversion is -not- OK: " << bc.what() << std::endl;
    }
     // this won't work because we're asking for a reference to Child2 type,
     // which isn't the actual type. Dynamic cast will check what's under
     // the parent pointer, which reveals a Child1 type
    return 0;    
}
