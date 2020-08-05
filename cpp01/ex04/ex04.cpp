/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 12:51:51 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/04 12:55:10 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringptr = &string;
    std::string &stringref = string;

    std::cout << "This is the string :   " << string << std::endl;
    std::cout << "This is the pointer:   " << *stringptr << std::endl;
    std::cout << "THis is the reference: " << stringref << std::endl;
    return 0;
}