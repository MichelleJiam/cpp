/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   trytest.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 17:24:36 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 19:56:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

void    function(int n) {
    std::cout << "Function beginning\n";
    if (!n)
        throw std::out_of_range("Error: n is 0");
    std::cout << "This won't print if exception is thrown\n";
}

int main(void) {
    try {
        function(0);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "This will always print\n";
    return 0;
}