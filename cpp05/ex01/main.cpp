/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:50:55 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/01 18:42:26 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat  *a = new Bureaucrat("Adam", 1);
    Bureaucrat  b("Bob", 150);

    std::cout << *a << b;
    std::cout << "Attempting to make Carie, grade 0: ";
    Bureaucrat  c("Carie", 0);
    std::cout << "Attempting to downgrade Bob: ";
    b.downGrade();
    std::cout << "Attempting to upgrade Bob: ";
    b.upGrade();
    std::cout << b;
    delete a;
    return 0;
}
