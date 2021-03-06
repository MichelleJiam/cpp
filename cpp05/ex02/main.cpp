/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:50:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/03 16:40:20 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat  *a = new Bureaucrat("Adam", 1);
    Bureaucrat  b("Bob", 150);

    std::cout << *a << b;

    ShrubberyCreationForm   *s = new ShrubberyCreationForm("theft_and");
    RobotomyRequestForm     r("Marvin");
    PresidentialPardonForm  p("Arthur");

    std::cout << *s;
    b.executeForm(*s);
    b.signForm(*s);
    a->signForm(*s);
    b.executeForm(*s);
    a->executeForm(*s);

    std::cout << std::endl << r;
    b.executeForm(r);
    a->signForm(r);
    a->executeForm(r);
    
    std::cout << std::endl << p;
    a->signForm(p);
    a->executeForm(p);
    delete s;
    delete a;
    return 0;
}
