/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:21:11 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 20:35:27 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void converter(char c) {
    if (c == 34)
        return;
    if (c >= 'a' && c <= 'z')
        c -= 32;
    std::cout << c;
    return;
}

int main(int ac, char **av) {
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; av[i]; i++)
            for (int j = 0; av[i][j]; j++)
                converter(av[i][j]);
        std::cout << std::endl;
    }
    return 0;
}
