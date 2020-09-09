/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:29:12 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 18:59:47 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data    *deserialize(void *raw) {
    Data    *cleanData = new Data();
    Data    *rawData = reinterpret_cast<Data *>(raw);

    cleanData->s1 = rawData->s1;
    cleanData->n = rawData->n;
    cleanData->s2 = rawData->s2;
    return cleanData;
}
