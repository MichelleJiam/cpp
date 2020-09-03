/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 18:48:22 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 16:31:02 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class   PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
    ~PresidentialPardonForm(void);

    void                execute(Bureaucrat const &executor) const;

private:
    PresidentialPardonForm(void);

    std::string         _target;
};

#endif