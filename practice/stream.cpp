/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stream.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:06:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 14:10:01 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main() {
    std::ifstream   ifs("numbers");
    unsigned int    dst;
    unsigned int    dst2;
    ifs >> dst >> dst2;
    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();
    std::ofstream   ofs("test.out");
    ofs << "I like cookies a great deal" << std::endl;
    ofs.close();
}