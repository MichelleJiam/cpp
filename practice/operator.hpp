/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operator.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 17:52:06 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 18:23:53 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

#include <iostream>

class Integer {
private:
    int _n;
public:
    Integer(int const n);
    ~Integer(void);

    int getValue(void) const;

    Integer &operator=(Integer const &rhs); // = has to return ref to current instance (otherwise a = b would not work)
    Integer operator+(Integer const &rhs) const; // + does not change current instance, so just returns copy of result
};

std::ostream    &operator<<(std::ostream &o, Integer const &rhs);

Integer::Integer(int const n) : _n(n) {
    std::cout << "Constructor called with value " << n << std::endl;
    return;
}

Integer::~Integer(void) {
    std::cout << "Destructor called with value " << this->_n << std::endl;
    return;
}

int             Integer::getValue(void) const {
    return this->_n;
}

Integer         &Integer::operator=(Integer const &rhs) {
    std::cout << "Assignation operator called from " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;
    this->_n = rhs.getValue();
    return *this; // * to recover reference
}

Integer         Integer::operator+(Integer const &rhs) const {
    std::cout << "Addition operator called with " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;
    return Integer(this->_n + rhs.getValue());
}

std::ostream    &operator<<(std::ostream &o, Integer const &rhs) {
    o << rhs.getValue();
    return o;
}  

#endif