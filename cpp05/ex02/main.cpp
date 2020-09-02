/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:50:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/02 18:41:00 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    Bureaucrat  *a = new Bureaucrat("Adam", 1);
    Bureaucrat  b("Bob", 150);

    std::cout << *a << b;
    std::cout << "Attempting to create form with (0,0) grades: ";

    Form        f0("Garbage memo", 0, 0);
    Form        *f = new Form("Petition to get office squirrels", 1, 1);
    Form        f2("Application for building permit renewal", 5, 149);

    std::cout << *f << f2;
    a->signForm(*f);
    std::cout << *f;
    b.signForm(f2);
    std::cout << f2;
    std::cout << "Attempting to upgrade Bob: ";
    b.upGrade();
    std::cout << b;
    b.signForm(f2);
    std::cout << *f << f2;
    delete f;
    delete a;
    return 0;
}
