/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   poly.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 17:38:22 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/06 17:50:38 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "poly.hpp"

int main(void) {
    Sample  sample;

    sample.bar('a');
    sample.bar(42);
    sample.bar(3.14f);
    sample.bar(sample);
    return 0;
}
