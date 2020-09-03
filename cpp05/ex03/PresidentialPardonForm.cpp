/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:48:11 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 16:56:21 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
        : Form("Presidential Pardon", 5, 25) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
        : Form("Presidential Pardon", 5, 25), _target(target) {
    return;
}

PresidentialPardonForm::PresidentialPardonForm(
        PresidentialPardonForm const &other)
        :   Form("Presidential Pardon", 5, 25), _target(other._target) {
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    return;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(
        PresidentialPardonForm const &other) {
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void                    PresidentialPardonForm::execute(
        Bureaucrat const &executor) const {
    Form::checkForm(executor);
    std::cout << "<" << this->_target << "> has been pardoned "
        << "by Zafod Beeblebrox" << std::endl;
    return;
}
