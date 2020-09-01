/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:51:38 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/01 18:38:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <exception>
#include <iostream>

class Bureaucrat {
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    ~Bureaucrat(void);

    int                 getGrade(void) const;
    std::string const   getName(void) const;

    void                upGrade(void);
    void                downGrade(void);
    void                gradeTry(int grade);

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

    std::string const   _name;
    int                 _grade;
};

std::ostream            &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif