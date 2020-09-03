/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:50:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 19:31:44 by mjiam         ########   odam.nl         */
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

    std::cout << std::endl << "Attempting to make form <garbage collection>"
        << std::endl;
    someRandomIntern.makeForm("garbage collection", "Trashman");
    return 0;
}
