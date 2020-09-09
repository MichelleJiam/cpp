/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:09:28 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/09 19:57:35 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main(void) {
    srand(time(NULL));
    Base   *base = generate();
    if (!base) {
        std::cerr << "Failed to generate Base instance" << std::endl;
        return 1;
    }
    std::cout << "identification from pointer: ";
    identify_from_pointer(base);
    std::cout << "identification from reference: ";
    identify_from_reference(*base);
    delete base;
    return 0;
}
