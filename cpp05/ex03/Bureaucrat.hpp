/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:51:38 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:22:21 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <exception>
#include <iostream>

class Form;

class Bureaucrat {
public:
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat &operator=(Bureaucrat const &other);
    ~Bureaucrat(void);

    int                 getGrade(void) const;
    std::string const   getName(void) const;

    void                upGrade(void);
    void                downGrade(void);
    void                signForm(Form &form);
    void                executeForm(Form const &form);

    class GradeTooHighException : public std::exception {
    public:
        virtual const char  *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char  *what(void) const throw();
    };

private:
    Bureaucrat(void);
    void                _gradeTry(int grade);

    std::string const   _name;
    int                 _grade;
};

std::ostream            &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif