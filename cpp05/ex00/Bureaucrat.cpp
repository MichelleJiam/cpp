/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:51:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 19:21:09 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade) {
    try {
        if ()
    }
    return;
}

Bureaucrat::Bureaucrat(std::string name, std::string title)
    : _name(name), _title(title) {
    std::cout << "\x1B[31m" << this->_name << "\033[0m, " << this->_title <<
        ", is born!" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    std::cout << "Imitation is the sincerest form of flattery that " <<
        "mediocrity can pay to greatness." << std::endl;
    *this = src;
    this->_name = src._name + " II";
    std::cout << "\x1B[31m" << this->_name << "\033[0m has been born."
        << std::endl;
    return;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "\x1B[31m" << this->_name << "\033[0m, " << this->_title <<
        ", is dead. " << "Consequences will never be the same!" << std::endl;
    return;
}

Bureaucrat      &Bureaucrat::operator=(Bureaucrat const &rhs) {
    std::cout << "You dare think me your equal?!" << std::endl;
    this->_name = rhs._name;
    this->_title = rhs._title;
    return *this;
}

char const      *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade is too high");
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << "I am \x1B[31m" << rhs.getName() << "\033[0m, " << rhs.getTitle() <<
        ", and I like ponies!" << std::endl;
    return o;
}

std::string     Bureaucrat::getName(void) const {
    return this->_name;
}

std::string     Bureaucrat::getTitle(void) const {
    return this->_title;
}
