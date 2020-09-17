/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:47:29 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 15:44:07 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include <ctime> // rand
#include <cstdlib> // rand on Linux
#include "Form.hpp"

class   RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
    ~RobotomyRequestForm(void);

    void                execute(Bureaucrat const &executor) const;

private:
    RobotomyRequestForm(void);

    std::string         _target;
};

#endif