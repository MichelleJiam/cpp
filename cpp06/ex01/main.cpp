/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:36:47 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 18:59:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void) {
    void    *raw;
    Data    *data;

    srand(time(NULL));
    raw = serialize();
    data = deserialize(raw);
    std::cout << "\nData received:\n" << data->s1 << std::endl
        << data->n << std::endl << data->s2 << std::endl;
    delete reinterpret_cast<Data *>(raw);
    delete data;
    return 0;
}
