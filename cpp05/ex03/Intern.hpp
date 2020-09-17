/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:45:11 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:23:36 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <locale> // std::tolower
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class   Intern {
public:
    Intern(void);
    Intern(Intern const &other);
    Intern &operator=(Intern const &other);
    ~Intern(void);

    Form        *makeForm(std::string const &name, std::string const &target);

    class UnknownFormException : public std::exception {
    public:
        virtual const char  *what(void) const throw();
    };

private:
    std::string _convertName(std::string name);

    Form        *_forms[4];
};

#endif