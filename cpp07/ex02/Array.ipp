/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.ipp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 17:49:26 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 15:35:28 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception> // std::exception

template <typename T>
Array<T>::Array(void) : _array(NULL), _n(0) {
	return;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _n(n) {
	this->_array = new T[n](); // empty () triggers default initialization of all elements
	return;
}

template <typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
	return;
}

template <typename T>
Array<T>::Array(Array const &other) : _array(NULL), _n(other._n) {
	this->_array = this->_deepcopy(other);
	return;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &other) {
	if (this != &other) {
		if (this->_n)
			delete [] this->_array;
		this->_array = this->_deepcopy(other);
		this->_n = other._n;
	}
	return *this;
}

template <typename T>
T			&Array<T>::operator[](unsigned int index) {
	if (index >= this->_n)
		throw std::exception();
	return this->_array[index];
}

template <typename T>
T const		&Array<T>::operator[](unsigned int index) const {  // for use with const objects
	if (index >= this->_n)
		throw std::exception();
	return this->_array[index];
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return this->_n;
}

template <typename T>
T			*Array<T>::_deepcopy(Array const &other) {
	T	*newarray = new T[other._n]();
	for (unsigned int i = 0; i < other._n; i++) {
		newarray[i] = other._array[i];
	}
	return newarray;
}
