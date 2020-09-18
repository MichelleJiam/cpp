/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_n_run.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 20:23:01 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/18 21:43:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_N_RUN_H
#define FILL_N_RUN_H

#include <cstdlib> // rand
#include <deque> // deque container
#include <iostream> // cout
#include <list> // list container
#include <vector> // vector container
#include "easyfind.hpp"

template <typename T>
void    display(T const &element) {
    std::cout << element << std::endl;
    return;
}

template <typename T>
void	fillnrun(T &container) {
	typename T::iterator    it;
	int						findme = rand() % 100;


	for (int i = 0; i < 5; i++)
        container.push_back(rand() % 100);
    std::cout << "Contents of container:" << std::endl;
    for_each(container.begin(), container.end(), display<int>);
    std::cout << "Int to find: " << findme << std::endl;
    try {
        it = easyfind(container, findme);
        std::cout << "Needle found!" << std::endl;
    }
    catch (std::exception const &e) {
        std::cerr << "Needle not found in haystack" << std::endl;
    }
	return;
}

template <> // explicit specialization for char list
void	fillnrun<std::list<char> > (std::list<char> &container) {
	std::list<char>::iterator   it;
	char                        findme = 'A' + rand() % 24;


	for (int i = 0; i < 5; i++)
        container.push_back('A' + rand() % 24);
    std::cout << "Contents of container:" << std::endl;
    for_each(container.begin(), container.end(), display<char>);
    std::cout << "Char to find: " << findme << std::endl;
    try {
        it = easyfind(container, findme);
        std::cout << "Needle found!" << std::endl;
    }
    catch (std::exception const &e) {
        std::cerr << "Needle not found in haystack" << std::endl;
    }
	return;
}

#endif