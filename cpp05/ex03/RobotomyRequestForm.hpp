/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:47:29 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 16:18:38 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

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