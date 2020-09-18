/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 21:57:36 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/18 23:33:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <exception>
#include <list>

class Span {
public:
	Span(unsigned int N);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span(void);

	void			addNumber(int num);
	template <typename T>
	void			addNumber(T begin, T end) {
		
	}
	int				shortestSpan(void);
	int				longestSpan(void);

private:
	Span(void);

	std::list<int>	_numbers;
	unsigned int	_limit;
};

#endif