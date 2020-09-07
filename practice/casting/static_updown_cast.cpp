/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   updowncast.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 20:49:11 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 21:06:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Parent {};
class   Child1: public Parent {};
class   Child2: public Parent {};
class   Unrelated {};

int main() {
    Child1  a;                  // reference value
    Parent  *b = &a;            // implicit reinterpretation cast
    Parent  *c = (Parent *) &a; // explicit reinterpretation cast

    Parent  *d = &a;            // impplicit upcast -> OK
    Child1  *e = d;             // implicit downcast -> Nope!
    Child2  *f = (Child2 *)d;   // explicit downcast -> compiles but runtime errors
    Child2      *f = static_cast<Child2 *>(d);      // explicit downcast -> compiles but runtime error
    Unrelated   *g = static_cast<Unrelated *>(&a);  // explicit conversion -> Nope!

    return 0;
}