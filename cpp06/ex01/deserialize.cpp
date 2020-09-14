/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:29:12 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 16:45:28 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data    *deserialize(void *raw) {
    Data    *cleanData = new Data();
    // char    *rawData = reinterpret_cast<char*>(raw);
    // int     *n = reinterpret_cast<int*>(raw + 8);

    cleanData->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    cleanData->n = *(static_cast<int*>(raw) + 2);
    // memcpy(&cleanData->n, (rawData + 8), sizeof(int));
    cleanData->s2 = std::string(reinterpret_cast<char*>(raw), 12, 8);
    return cleanData;
}
