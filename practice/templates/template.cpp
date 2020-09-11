/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   template.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 15:01:07 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/10 16:49:32 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>                            // template definition
T const   &max(T const &x, T const &y) {
    return (x >= y ? x : y);
}

int foo(int x) {
    std::cout << "long computing time\n";
    return x;
}

int main(void) {
    int a = 21;
    int b = 42;

    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << max<int>(a,b) << std::endl;    // explicit instanciation of template
    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << max(a,b) << std::endl;         // implicit instanciation

    float   c = -1.7f;
    float   d = 4.2f;
    
    std::cout << "max of " << c << " and " << d << " is ";
    std::cout << max<float>(c,d) << std::endl;  // explicit instanciation of template
    std::cout << "max of " << c << " and " << d << " is ";
    std::cout << max(c,d) << std::endl;         // implicit instanciation

    char    e = 'a';
    char    f = 'z';

    std::cout << "max of " << e << " and " << f << " is ";
    std::cout << max<char>(e,f) << std::endl;   // explicit instanciation of template
    std::cout << "max of " << e << " and " << f << " is ";
    std::cout << max(e,f) << std::endl;         // implicit instanciation

    int ret = max<int>(foo(a), foo(b));         // explicit instanciation
    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << ret << std::endl;
    return 0;
}