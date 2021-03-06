/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:45:17 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 17:20:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
    return;
}

Intern::Intern(Intern const &other) {
    (void)other;
    return;
}

Intern::~Intern(void) {
    if (*this->_forms)
        this->shredForms();
    return;
}

Intern  &Intern::operator=(Intern const &other) {
    (void)other;        
    return *this;
}

std::string Intern::_convertName(std::string name) {
    char        charstr[name.length() + 1];

    for (int i = 0; name[i]; i++)
        charstr[i] = std::tolower(name[i]);
    return std::string(charstr);
}

Form    *Intern::makeForm(std::string const &name, std::string const &target) {
    Form    *form = NULL;

    try {
        this->_forms[0] = new PresidentialPardonForm(target);
        this->_forms[1] = new RobotomyRequestForm(target);
        this->_forms[2] = new ShrubberyCreationForm(target);
        this->_forms[3] = NULL;
        for (int i = 0; i < 3; i++) {
            if (_convertName(this->_forms[i]->getName()) == _convertName(name))
                form = this->_forms[i];
        }
        if (!form)
            throw UnknownFormException();
    }
    catch (UnknownFormException &e) {
        std::cout << e.what() << std::endl;
        return NULL;
    }
    std::cout << "Intern creates <" << form->getName() << ">" << std::endl;
    return form;
}

void    Intern::shredForms(void) {
    for (int i = 0; i < 3; i++)
        delete this->_forms[i];
    return;
}

char const  *Intern::UnknownFormException::what(void) const throw() {
    return ("Error: Unknown form requested");
}
