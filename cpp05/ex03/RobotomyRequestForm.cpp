/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:47:34 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 16:56:31 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
        : Form("Robotomy Request", 45, 72) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
        : Form("Robotomy Request", 45, 72), _target(target) {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
        :   Form("Robotomy Request", 45, 72), _target(other._target) {
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    return;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(
        RobotomyRequestForm const &other) {
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void                    RobotomyRequestForm::execute(
        Bureaucrat const &executor) const {
    Form::checkForm(executor);
    srand(time(NULL));
    int roll = rand() % 2;
    if (roll)
        std::cout << "*whrrrrrrrrrrr* <" << this->_target <<
            "> has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy carried out but failed!" << std::endl;
    return;
}
