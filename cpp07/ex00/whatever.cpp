/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 18:30:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 19:42:35 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Awesome.hpp"

template <typename T>
void   swap(T &x, T &y) {
    T z = x;
    x = y;
    y = z;
    return;
}

template <typename T>
T const &min(T const &x, T const &y) {
    return (x < y ? x : y);
}

template <typename T>
T const &max(T const &x, T const &y) {
    return (x > y ? x : y);
}

int main(void) {
    int a = 2;
    int b = 3;
    ::swap(a,b);
    std::cout << "\n--- Int test ---\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c,d);
    std::cout << "\n--- String test ---\n";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    char    e = 'E', f = 'F';
    ::swap(e,f);
    std::cout << "\n--- Char test ---\n";
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min(e,f) << std::endl;
    std::cout << "max( e, f ) = " << ::max(e,f) << std::endl;

    // Awesome	A(42);
	// Awesome	B(21);
	// Awesome C(0);
    // std::cout << "\n--- Awesome test ---\n";
	// std::cout << "A: " << A << "B: " << B;
	// ::swap( A, B );
	// std::cout << "after swap:" << std::endl;
	// std::cout << "A: " << A << "B: " << B;
	// C = ::min(A, B);
	// std::cout << "min( A, B ) = " << C;
	// C = ::max(A, B);
	// std::cout << "max( A, B ) = " << C;

    return 0;
}