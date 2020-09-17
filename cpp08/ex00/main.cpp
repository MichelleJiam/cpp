/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:35:58 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 18:05:18 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib> // rand
#include <iostream> // cout
#include <list>
#include <vector>
#include "easyfind.hpp"

template <typename T>
void    display(T const &element) {
    std::cout << element << std::endl;
    return;
}

int main(void) {
    std::list<int>              i_lst;
    std::list<int>::iterator    it;
    int                         findme = rand() % 100;

    for (int i = 0; i < 5; i++)
        i_lst.push_back(rand() % 100);
    std::cout << "Contents of int list:" << std::endl;
    for_each(i_lst.begin(), i_lst.end(), display<int>);
    std::cout << "Int to find: " << findme << std::endl;
    try {
        it = easyfind(i_lst, findme);
    }
    catch (std::exception const &e) {
        std::cerr << "Needle not found in haystack" << std::endl;
    }
    return 0;
}
