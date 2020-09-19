/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 21:57:36 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/19 22:33:48 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <algorithm> // sort, min_element, max_element
#include <exception> // std::exception
#include <iostream> // cout
#include <iterator> // distance
#include <vector> // vector container

class Span {
public:
	Span(unsigned int N);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span(void);

	unsigned int	getLimit(void) const;

	void			addNumber(int num);
	template <typename T>
	void			addNumber(T first, T last) {
		if (std::distance(first, last) + this->_numbers.size() > this->_limit)
			throw std::exception();
		this->_numbers.insert(this->_numbers.end(), first, last);
	}
	int				shortestSpan(void);
	int				longestSpan(void);
	void			printElements(int start, int amount) const;

private:
	Span(void);

	std::vector<int>	_numbers;
	unsigned int		_limit;
};

#endif