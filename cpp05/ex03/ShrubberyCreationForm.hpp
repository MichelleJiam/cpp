/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:47:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 15:56:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include <fstream>
#include "Form.hpp"

class   ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
    ~ShrubberyCreationForm(void);

    void                execute(Bureaucrat const &executor) const;

    class FileFailException : public std::exception {
    public:
        virtual const char  *what(void) const throw();
    };

private:
    ShrubberyCreationForm(void);

    std::string         _target;
};

#endif