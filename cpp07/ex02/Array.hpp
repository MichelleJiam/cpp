/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 17:42:30 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 15:35:34 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
public:
	Array(void);
	Array(unsigned int n);
	~Array(void);
	Array(Array const &other);
	Array &operator=(Array const &other);
	T &operator[](unsigned int index);
	T const &operator[](unsigned int index) const; // for use with const objects

	unsigned int	size(void) const;

private:
	T				*_array;
	unsigned int	_n;

	T				*_deepcopy(Array const &other);
};

#include "Array.ipp"

#endif