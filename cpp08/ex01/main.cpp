/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 21:52:46 by mjiam         #+#    #+#                 */
/*   Updated: 2020/10/01 15:34:23 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "span.hpp"

int		numberGen(void) {
	return (rand() % 1000);
}

void	addwithiteratortest(void) {
	Span				sp = Span(10001);
	std::vector<int>	i_vec(10000);

	std::cout << "\naddNumber with iterators:" << std::endl;
	srand(time(NULL));
	std::generate(i_vec.begin(), i_vec.end(), numberGen);
	std::cout << "Last generated number: " << i_vec.at(9999) << std::endl;
	try {
		sp.addNumber(i_vec.begin(), i_vec.end());
		sp.addNumber(42);
		std::cout << "Last 5 elements of sp: " << std::endl;
		sp.printElements(9996, 5);
	}
	catch (std::exception const &e) {
		std::cerr << "Limit reached. Cannot add more elements" << std::endl;
	}
	return;
}

void	limittest(void) {
	Span				sp = Span(0);

	std::cout << "addNumber to container with limit 0:" << std::endl;
	sp = Span(0);
	try {
		sp.addNumber(420);
		std::cout << "Contents of sp: " << std::endl;
		sp.printElements(0, 5);
	}
	catch (std::exception const &e) {
		std::cerr << "Limit reached. Cannot add more elements" << std::endl;
	}
	return;
}

void	basictest(void) {
	Span				sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return;
}

int	main(void) {
	std::cout << "--- Commencing basic tests ---" << std::endl;
	basictest();
	std::cout << "\n--- Commencing further testing ---" << std::endl;
	limittest();
	addwithiteratortest();
	return 0;	
}
