/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:34:39 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/18 19:55:47 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <algorithm> // find
#include <exception> // std::except

template <typename T>
typename T::iterator easyfind(T &container, int findme) {
    typename T::iterator    it;

    it = find(container.begin(), container.end(), findme);
    if (it == container.end())
        throw std::exception();
    return it;
}

#endif