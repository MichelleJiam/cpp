/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 18:43:53 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/02 18:12:21 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
public:
    Form(std::string const &name, int execgrade, int signgrade);
    Form(Form const &other);
    Form &operator=(Form const &other);
    ~Form(void);

    std::string const   getName(void) const;
    int                 getexecGrade(void) const;
    int                 getsignGrade(void) const;
    bool                getSigned(void) const;

    void                beSigned(Bureaucrat const &bureaucrat);
    void                gradeTry(int execgrade, int signgrade);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char  *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char  *what(void) const throw();
    };

private:
    Form(void);
    
    std::string const   _name;
    bool                _signed;
    int const           _execGrade;
    int const           _signGrade;
};

std::ostream            &operator<<(std::ostream &o, Form const &obj);

#endif