/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:26:01 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/30 14:34:47 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak() {
	std::string	*panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void) {
	memoryLeak();
	return 0;
}