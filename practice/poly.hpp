/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   poly.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 17:40:26 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 17:47:57 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_H
# define POLY_H

#include <iostream>

class Sample
{
private:
    /* data */
public:
    Sample(void);
    ~Sample(void);

    void    bar(char const c) const;
    void    bar(int const n) const;
    void    bar(float const z) const;
    void    bar(Sample const &i) const;
};

Sample::Sample(/* args */) {
    std::cout << "Constructor called\n";
}

Sample::~Sample() {
    std::cout << "Destructor called\n";
}

void    Sample::bar(char const c) const {
    std::cout << "Member function bar called with char overload: "
        << c << std::endl;
    return;
}

void    Sample::bar(int const n) const {
    std::cout << "Member function bar called with int overload: "
        << n << std::endl;
    return;
}

void    Sample::bar(float const z) const {
    std::cout << "Member function bar called with float overload: "
        << z << std::endl;
    return;
}
void    Sample::bar(Sample const &i) const {
    (void) i;
    std::cout << "Member function bar called with Sample overload" << std::endl;
    return;
}

#endif