/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialize.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:29:20 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 18:47:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void    *serialize(void) {
    Data                *data = new Data;
    std::string const   alnum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 0; i < 8; i++) {
        data->s1 += alnum[rand() % 62];
        data->s2 += alnum[rand() % 62];
    }
    data->n = rand();
    std::cout << "Data generated:\n" << data->s1 << std::endl
        << data->n << std::endl << data->s2 << std::endl;
    return reinterpret_cast<void *>(data);
}
