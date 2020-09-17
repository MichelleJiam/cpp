/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:51:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:22:21 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) {
    return;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name) {
    _gradeTry(grade);
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name) {
    _gradeTry(other._grade);
    return;
}

Bureaucrat::~Bureaucrat(void) {
    return;
}

Bureaucrat          &Bureaucrat::operator=(Bureaucrat const &other) {
    if (this != &other)
        _gradeTry(other._grade);
    return *this;
}

std::ostream        &operator<<(std::ostream &o, Bureaucrat const &obj) {
    o << "<" << obj.getName() << ">, bureaucrat grade <" << obj.getGrade()
        << ">" << std::endl;
    return o;
}

int                 Bureaucrat::getGrade(void) const {
    return this->_grade;
}

std::string const   Bureaucrat::getName(void) const {
    return this->_name;
}

void                Bureaucrat::upGrade(void) {
    _gradeTry(this->_grade - 1);
    return;
}

void                Bureaucrat::downGrade(void) {
    _gradeTry(this->_grade + 1);
    return;
}

void                Bureaucrat::_gradeTry(int grade) {
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

void                Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << "<" << this->_name << "> signs <" << form.getName()
            << ">" << std::endl;
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << "<" << this->_name << "> cannot sign <" << form.getName()
            << "> because: " << e.what() << std::endl;
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
