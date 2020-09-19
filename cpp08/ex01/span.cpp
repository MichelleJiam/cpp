/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 21:52:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/19 23:02:30 by mjiam         ########   odam.nl         */
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
	: _numbers(other._numbers), _limit(other._limit) {
	return;
}

Span			&Span::operator=(Span const &other) {
	if (this != &other) {
		this->_limit = other._limit;
		this->_numbers = other._numbers;
	}
	return *this;
}

Span::~Span(void) {
	return;
}

unsigned int	Span::getLimit(void) const {
	return this->_limit;
}

void			Span::addNumber(int num) {
	if (this->_numbers.size() >= this->_limit)
		throw std::exception();
	this->_numbers.push_back(num);
	return;
}

int				Span::shortestSpan(void) {
	if (this->_numbers.empty() || this->_numbers.size() == 1)
		throw std::exception();
	std::sort(this->_numbers.begin(), this->_numbers.end());
	return this->_numbers.at(1) - this->_numbers.at(0);
}

int				Span::longestSpan(void) {
	if (this->_numbers.empty() || this->_numbers.size() == 1)
		throw std::exception();
	std::vector<int>::iterator	min, max;
	min = std::min_element(this->_numbers.begin(), this->_numbers.end());
	max = std::max_element(this->_numbers.begin(), this->_numbers.end());
	return *max - *min;
}

void			Span::printElements(int start, int amount) const {
	if (amount + start > static_cast<int>(this->_numbers.size()))
		std::cerr << "Amount to print goes out of bounds" << std::endl;
	else {
		for (int i = start; i < start + amount; i++)
			std::cout << this->_numbers.at(i) << std::endl;
	}
	return;
}
