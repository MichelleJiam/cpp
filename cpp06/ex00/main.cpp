/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 17:11:33 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/08 18:04:17 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#include <cmath>

int main(int ac, char **av) {
    if (ac != 2)
        std::cout << "Invalid number of arguments" << std::endl;
    else {
        // Convert output(av[1]);
        double d;
        int ret = 1;
        std::cout.precision(1);
        std::cout.setf(std::cout.fixed);
        ret = sscanf(av[1], "%lf", &d);
        if (d == NAN)
            std::cout << "d is NAN\n";
        float f = static_cast<float>(d);
        if (f == NAN)
            std::cout << "f is NAN\n";
        int i = static_cast<int>(d);
        char c = static_cast<char>(d);
        if (!ret)
            std::cout << "Could not parse input\n";
        std::cout << "f: " << f << "f" << std::endl;
        std::cout << "d: " << d << std::endl;
        std::cout << "i: " << i << std::endl;
        if (isgraph(c))
            std::cout << "c: '" << c << "'" << std::endl;
        else
            std::cout << "c: Non displayable\n";
        std::cout << "int_max: " << INT_MAX << std::endl;
    }
    return 0;
}
