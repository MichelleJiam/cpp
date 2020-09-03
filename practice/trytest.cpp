/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   trytest.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 17:24:36 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 17:51:56 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

void    function(int n) {
    std::cout << "Function activated\n";
    if (!n)
        throw std::out_of_range("Error: n is 0");
    std::cout << "End of function\n";
}

int main(void) {
    try {
        function(0);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "End of program\n";
    return 0;
}