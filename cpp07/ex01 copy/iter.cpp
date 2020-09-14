/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 19:44:39 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 19:57:45 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef> // size_t
#include <iostream> // string & cout
#include "Awesome.hpp"

template <typename T>
void    iter(T *array, size_t length, void (*f)(T const &element)) {
    for (size_t i = 0; i < length; i++)
        f(array[i]);
    return;
}

template <typename T>
void    printme(T const &element) {
    std::cout << element << std::endl;
    return;
}

int main(void) {
    float       f[] = {4.2f, 42.24f, 24.42f, 3.14f};
    std::string s[] = {"this", "is", "a", "string"};
    
    ::iter(f, 4, printme);
    ::iter(s, 4, printme);
    return 0;
}
