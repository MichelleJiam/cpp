/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:51:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/01 18:41:18 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    gradeTry(grade);
    return;
}
// try can also be done with function-try-block

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name) {
    gradeTry(src._grade);
    return;
}

Bureaucrat::~Bureaucrat(void) {
    return;
}

Bureaucrat          &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs)
        gradeTry(rhs._grade);
    return *this;
}

std::ostream        &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() <<
        ">" << std::endl;
    return o;
}

int                 Bureaucrat::getGrade(void) const {
    return this->_grade;
}

std::string const   Bureaucrat::getName(void) const {
    return this->_name;
}

void                Bureaucrat::upGrade(void) {
    gradeTry(this->_grade - 1);
    return;
}

void                Bureaucrat::downGrade(void) {
    gradeTry(this->_grade + 1);
    return;
}

void                Bureaucrat::gradeTry(int grade) {
    try {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        this->_grade = grade;
    }
    catch (GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return;
}

char const          *Bureaucrat::GradeTooHighException::what(
        void) const throw() {
    return ("Grade is too high");
}

char const          *Bureaucrat::GradeTooLowException::what(
        void) const throw() {
    return ("Grade is too low");
}
