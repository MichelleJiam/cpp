/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:51:38 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 19:23:23 by mjiam         ########   odam.nl         */
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

    class GradeTooHighException : public std::logic_error {
    public:
        virtual const char  *what(void) const throw();
    }

    int                 getGrade(void) const;
    std::string         getName(void) const;
    void                setName(std::string &name);

    void                increaseGrade(void);
    void                decreaseGrade(void);

private:
    Bureaucrat(void);

    std::string const   _name;
    int                 _grade;
};

std::ostream            &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif