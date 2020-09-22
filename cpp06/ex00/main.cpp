/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:11:33 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/22 15:10:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        std::cout << "Invalid number of arguments" << std::endl;
    else {
        std::string input(av[1]);
        Convert     output;

        try {
            output.convertData(input);
        }
        catch (std::invalid_argument &e) {
            std::cerr << e.what() << std::endl;
            return (1);
        }
        std::cout.precision(1);
        std::cout.setf(std::cout.fixed);
        output.printData();
    }
    return 0;
}
