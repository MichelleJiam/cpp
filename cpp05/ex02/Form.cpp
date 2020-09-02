/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 18:44:07 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/02 19:18:01 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _execGrade(150), _signGrade(150) {
    return;
}

Form::Form(std::string const &name, int execgrade, int signgrade)
        :   _name(name), _signed(false),
            _execGrade(execgrade), _signGrade(signgrade) {
    gradeTry(execgrade, signgrade);
    return;
}

Form::Form(Form const &other)
        :   _name(other._name), _signed(other.getSigned()),
            _execGrade(other._execGrade), _signGrade(other._signGrade) {
    gradeTry(other._execGrade, other._signGrade);
    return;
}

Form::~Form(void) {
    return;
}

Form                &Form::operator=(Form const &other) {
    if (this != &other) {
        this->_signed = other._signed;
        gradeTry(other._execGrade, other._signGrade);
    }
    return *this;
}

std::ostream        &operator<<(std::ostream &o, Form const &obj) {
    o << "-------------------------------------------" << std::endl;
    o << "            Form Status Report             " << std::endl;
    o << "-------------------------------------------" << std::endl;
    o << "Form <" << obj.getName() << "> is ";
    if (obj.getSigned() == false)
        o << "not signed. " << std::endl;
    else
        o << "signed. " << std::endl;
    o << "Grade required to sign form: " << obj.getsignGrade() << std::endl;
    o << "Grade required to execute form: " << obj.getexecGrade() << std::endl;
    o << "-------------------------------------------\n" << std::endl;
    return o;
}

std::string const   Form::getName(void) const {
    return this->_name;
}

int                 Form::getexecGrade(void) const {
    return this->_execGrade;
}

int                 Form::getsignGrade(void) const {
    return this->_signGrade;
}

bool                Form::getSigned(void) const {
    return this->_signed;
}

void                Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
    return;
}

void                Form::checkForm(Bureaucrat const &executor) const {
    if (this->_signed == false)
        throw FormNotSignedException();
    else if (this->_execGrade < executor.getGrade())
        throw GradeTooLowException();
    return;
}

void                Form::gradeTry(int execgrade, int signgrade) {
    try {
        if (signgrade < 1 || execgrade < 1)
            throw GradeTooHighException();
        else if (signgrade > 150 || execgrade > 150)
            throw GradeTooLowException();
    }
    catch (GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return;
}

char const          *Form::GradeTooHighException::what(void) const throw() {
    return ("Grade is too high");
}

char const          *Form::GradeTooLowException::what(void) const throw() {
    return ("Grade is too low");
}

char const          *Form::FormNotSignedException::what(void) const throw() {
    return ("Form has not been signed");
}
