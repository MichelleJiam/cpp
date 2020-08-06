/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   canon.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 18:33:08 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 18:54:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANON_H
# define CANON_H

#include <iostream>

class Sample {
private:
    int         _foo;
    
public:
    Sample(void);                               // canonical
    Sample(int const n);
    Sample(Sample const &src);                  // canonical
        // copy constructor (a constructor taking an instance of the class as param for copying)
    ~Sample(void);                              // canonical

    Sample      &operator=(Sample const &rhs);  // canonical

    int         getFoo(void) const;
};

std::ostream    &operator<<(std::ostream &o, Sample const &i);

Sample::Sample(void) : _foo(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Sample::Sample(int const n) : _foo(n) {
    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Sample::Sample(Sample const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Sample::~Sample() {
    std::cout << "Destructor called" << std::endl;
    return;
}

int             Sample::getFoo(void) const {
    return this->_foo;
}

Sample         &Sample::operator=(Sample const &rhs) {
    std::cout << "Assignation operator called from " << this->_foo;
    std::cout << " to " << rhs.getFoo() << std::endl;
    this->_foo = rhs.getFoo();
    return *this; // * to recover reference
}

std::ostream    &operator<<(std::ostream &o, Sample const &i) {
    o << "The value of foo is: ";
    o << i.getFoo();
    return o;
}  

#endif