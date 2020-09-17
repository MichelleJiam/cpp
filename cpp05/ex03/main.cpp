/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:50:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 17:19:48 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat  someFacelessBureaucrat("Al", 42);
    Intern      someRandomIntern;
    Form        *form;

    form = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *form << someFacelessBureaucrat;
    someFacelessBureaucrat.signForm(*form);
    someFacelessBureaucrat.executeForm(*form);

    someRandomIntern.shredForms();
    std::cout << std::endl << "Attempting to make form <garbage collection>"
        << std::endl;
    form = someRandomIntern.makeForm("garbage collection", "Trashman");
    someRandomIntern.shredForms();
    form = someRandomIntern.makeForm("robotomy request", "Marvin");
    std::cout << *form;
    someFacelessBureaucrat.signForm(*form);
    someFacelessBureaucrat.executeForm(*form);
    return 0;
}
