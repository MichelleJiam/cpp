/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:46:48 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 16:56:39 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
        : Form("Shrubbery Creation", 137, 145) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
        : Form("Shrubbery Creation", 137, 145), _target(target) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
        :   Form("Shrubbery Creation", 137, 145), _target(other._target) {
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    return;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(
        ShrubberyCreationForm const &other) {
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void                    ShrubberyCreationForm::execute(
        Bureaucrat const &executor) const {
    Form::checkForm(executor);
    std::string     filename(this->_target + "_shrubbery");
    std::ofstream   output(filename.c_str(), std::ios::trunc);
    try {
        if (output.fail())
            throw FileFailException();
    }
    catch (FileFailException &e) {
        std::cout << e.what() << std::endl;
    }
    output << "          %%%,%%%%%%%" << std::endl;
    output << "       ,'%% \\\\-*%%%%%%%" << std::endl;
    output << " ;%%%%%*%   _%%%%" << std::endl;
    output << "  ,%%%       \\(_.*%%%%." << std::endl;
    output << "  % *%%, ,%%%%*(    '" << std::endl;
    output << "%^     ,*%%%  )\\|,%%*%,_" << std::endl;
    output << "     *%     \\/ #).-*%%*" << std::endl;
    output << "          _.) ,/ *%," << std::endl;
    output << " __________/)#(_____________" << std::endl;
    output.close();
    return;
}

char const              *ShrubberyCreationForm::FileFailException::what(
        void) const throw() {
    return ("Error: failed to open output file");
}
