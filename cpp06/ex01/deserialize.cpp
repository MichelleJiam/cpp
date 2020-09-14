/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:29:12 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/14 18:18:19 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data    *deserialize(void *raw) {
    Data    *cleanData = new Data();
    char    *rawData = reinterpret_cast<char*>(raw);

    cleanData->s1 = std::string(rawData, 8); // calls string constructor taking c-string and size n
    memcpy(&cleanData->n, (rawData + 8), sizeof(int));
    cleanData->s2 = std::string(rawData + 12, 8);
    return cleanData;
}
