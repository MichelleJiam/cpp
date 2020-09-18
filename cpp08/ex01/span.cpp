/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 21:52:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/19 00:03:15 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {
	return;
}

Span::Span(unsigned int N) : _limit(N) {
	return;
}

Span::Span(Span const &other)
	: _limit(other._limit), _numbers(other._numbers) {
	return;
}

Span	&Span::operator=(Span const &other) {
	if (this != &other) {
		this->_limit = other._limit;
		this->_numbers = other._numbers;
	}
	return *this;
}

Span::~Span(void) {
	return;
}

void	Span::addNumber(int num) {
	if (this->_numbers.size() >= this->_limit)
		throw std::exception();
	this->_numbers.push_back(num);
	return;
}

int		Span::shortestSpan(void) {
	this->_numbers.sort()
}

int		Span::longestSpan(void) {
	
}
