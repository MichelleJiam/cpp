/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 16:18:47 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 21:15:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int     error(std::string error) {
    std::cout << "Error: " << error << std::endl;
    return -1;
}

void    searchndestroy(std::string &line, std::string const &s1, std::string const &s2) {
    std::size_t found = line.find(s1);
    while (found != std::string::npos) {
        line.replace(found, s1.length(), s2);
        found = line.find(s1, s2.length() + found);
    }
}

int     replace(std::string const &file, std::string const &s1, std::string const &s2) {
    std::string     outfile(file + ".replace");
    std::ifstream   input(file.c_str());
    if (input.fail())
        return error("failed to open input file");
    std::ofstream   output(outfile.c_str(), std::ios::trunc);
    if (output.fail())
        return error("failed to open output file");
    std::string line;
    while (getline(input, line)) {
        if (input.fail())
            return error("failed to read from file");
        if (!input.eof())
            line.append("\n");
        searchndestroy(line, s1, s2);
        output << line;
        line.clear();
    }
    return 0;
}

int     main(int ac, char **av) {
    if (ac != 4)
        return error("invalid number of arguments");
    return replace(av[1], av[2], av[3]);
}