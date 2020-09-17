/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:34:39 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 18:04:46 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <algorithm> // find
#include <exception> // std::except

template <typename T>
typename T::iterator easyfind(T const &container, int const &findme) {
    typename T::iterator    it;

    it = std::find(container.begin(), container.end(), findme);
    if (it == container.end())
        throw std::exception();
    return it;
}

#endif