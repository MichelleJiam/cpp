/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   castoperator.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:51:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/07 14:56:04 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Foo {
public:
    Foo(float const v) : _v(v) {};
    
    float       getV(void)  {return this->_v;}

    operator    float(void) {return this->_v;}
    operator    int(void)   {return static_cast<int>(this->_v);}

private:
    float       _v;
};

int main(void) {
    Foo     a(420.024f);
    float   b = a;
    int     c = a;

    std::cout << a.getV() << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}