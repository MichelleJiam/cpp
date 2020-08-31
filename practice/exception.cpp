/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   exception.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:28:16 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:48:54 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// exceptions should be used when errors are not expected/frequent, as it is
// resource-intensive compared to returning a specific error value.

#include <stdexcept>

void    test1(void) {
    try {
        // do some stuff here
        if (/* there's an error */)
            throw std::exception();
        else
            // do some more stuff
    }
    catch (std::exception e) {
        // handle error here
    }
}

void    test2(void) {
    // do some stuff here
    if (/* there's an error */)
        throw std::exception();
    else
        // do some more stuff
}

void    test3(void) {
    try {
        test2();
    }
    catch (std::exception &e) { // catch can be done by reference as well
        // handle error here
    }
}

void    test4(void) {
    class   PEBKACException : public std::exception {
    public:
        // "throw" at the end of a function definition means this function may throw something.
        // throw() means it doesn't throw anything. throw(exceptionName) would throw that exception.
        virtual const char  *what(void) const throw() {
            return ("Problem exists between keyboard and chair");
        }
    };

    try {
        test3();
    }
    catch (PEBKACException &e) { // specific catch
        // handle ID-10T error
    }
    catch (std::exception &e) { // generic catch
        // handle other exceptions 
    }
}
