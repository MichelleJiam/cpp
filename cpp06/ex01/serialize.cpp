/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:29:20 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 17:53:05 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void    *serialize(void) {
    char        *serialized = new char[20];
    char const  *alnum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < 8; i++) {
        serialized[i] = alnum[rand() % 62];
        serialized[i + 12] = alnum[rand() % 62];
    }
    int n = rand();
    memcpy(serialized + 8, &n, sizeof(n));
    std::cout << "Data generated:\n";
    for (int i = 0; i < 8; i++)
        std::cout << serialized[i];
    std::cout << std::endl << n << std::endl;
    for (int i = 12; i < 20; i++)
        std::cout << serialized[i];
    std::cout << std::endl;
    return reinterpret_cast<void*>(serialized);
}
