/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:47:09 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/30 11:39:22 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include "contact.hpp"

void    printshortlist(contact &contact) {
    for (int i = -1; i < 3; i++) {
        if (i < 0)
            std::cout << std::setw(10) << contact.getindex();
        else
            contact.showinformation(contact.getinformation(i));
    }
    std::cout << std::endl;
}

void    searchcontact(contact contacts[8], int index, std::string *input) {
    std::cout << "----------|----------|----------|----------\n";
    std::cout << "     index|first name| last name|  nickname\n";
    std::cout << "----------|----------|----------|----------\n";
    for (int i = 0; i < index; i++)
        printshortlist(contacts[i]);
    std::cout << "Please enter index of contact to look up." << std::endl;
    std::getline(std::cin, *input);
    for (int i = 0; (*input)[i]; i++) {
        if (!std::isdigit((*input)[i])) {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            return;
        }
    }
    int in = std::atoi((*input).c_str());
    if (in < 0 || in >= index)
        std::cout << "Index specified does not exist." << std::endl;
    else {
        for (int field = 0; field < 11; field++) {
            std::cout << contacts[in].printfield(field) << ": ";
            std::cout << contacts[in].getinformation(field) << std::endl;
        }
    } 
    return;
}

void    fillcontact(contact &contact, std::string *input, int field) {
    std::cout << "Please enter contact's ";
    std::cout << contact.printfield(field) << ": ";
    std::cout << std::endl;
    std::getline(std::cin, *input);
    contact.setinformation(*input, field);
}

void    newcontact(contact &contact, int *index, std::string *input) {
    contact.setindex(*index);
    for (int field = 0; field < 11; field++)
        fillcontact(contact, input, field);
    *index += 1;
    return;
}

int     checkinput(std::string input) {
    if (!input.compare("ADD") || !input.compare("add"))
        return 1;
    else if (!input.compare("SEARCH") || !input.compare("search"))
        return 2;
    else if (!input.compare("EXIT") || !input.compare("exit"))
        return 3;
    std::cout << "Invalid input" << std::endl;
    return 0;
}

int     promptinput(std::string *input, int *command) {
    *command = 1;
    std::cout << "Please enter one of these commands: ADD, SEARCH, EXIT" << std::endl;
    std::getline(std::cin, *input);
    if (!(*command = checkinput(*input))) {
        (*input).clear();
        promptinput(input, command);
    }
    return 0;
}

int     main(void) {
    int             command = 0;
    int             index = 0;
    std::string     input;
    contact         contacts[8];

    while (true) {
        promptinput(&input, &command);
        input.clear();
        if (command == 3)
            return 0;
        if (command == 1 && index == 8)
            std::cout << "8 contact maximum reached. Please EXIT to clear phonebook." << std::endl;
        else if (command == 1)
            newcontact(contacts[index], &index, &input);
        else if (command == 2)
            searchcontact(contacts, index, &input);
    }
    return 0;
}
