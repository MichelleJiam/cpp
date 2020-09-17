/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 17:42:14 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 13:32:17 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout
#include "Array.hpp"
#include "Awesome.hpp"

int	main(void) {
	Array<int>	empty_array;
	
	std::cout << "--- Empty array ---" << std::endl;
	std::cout << "Size of empty array: " << empty_array.size() << std::endl;
	try {
		std::cout << "Trying to access index 0:" << std::endl;
		std::cout << empty_array[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Index given is out of limits" << std::endl;
	}

	Array<int>	i_array(4);

	std::cout << "\n--- Int array: default initialization ---" << std::endl;
	for (unsigned int i = 0; i < i_array.size(); i++)
		std::cout << i_array[i] << std::endl;
	i_array[3] = 42;
	std::cout << "After value assignation:" << std::endl;
	for (unsigned int i = 0; i < i_array.size(); i++)
		std::cout << i_array[i] << std::endl;
	try {
		std::cout << "Trying to access index 4:" << std::endl;
		i_array[4] = 13;
	}
	catch (std::exception &e) {
		std::cerr << "Index given is out of limits" << std::endl;
	}

	Array<std::string>	str_array(3);

	str_array[0] = "Hello";
	str_array[1] = "world";
	str_array[2] = "!";
	std::cout << "\n--- String array: after value assignation ---" << std::endl;
	for (unsigned int i = 0; i < str_array.size(); i++)
		std::cout << str_array[i] << std::endl;
	try {
		std::cout << "Trying to access index -1:" << std::endl;
		std::cout << str_array[-1] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Index given is out of limits" << std::endl;
	}

	Array<int>	i_array2(i_array);

	std::cout << "\n--- Int array: by copy constructor ---" << std::endl;
	std::cout << "Original array before value change:" << std::endl;
	for (unsigned int i = 0; i < i_array.size(); i++)
		std::cout << i_array[i] << std::endl;
	i_array[0] = 13;
	std::cout << "Original array after value change:" << std::endl;
	for (unsigned int i = 0; i < i_array.size(); i++)
		std::cout << i_array[i] << std::endl;
	std::cout << "Copy array values:" << std::endl;
	for (unsigned int i = 0; i < i_array2.size(); i++)
		std::cout << i_array2[i] << std::endl;

	Array<Awesome>	awe_array(3);

	std::cout << "\n--- Awesome array ---" << std::endl;
	std::cout << "Size of Awesome array: " << awe_array.size() << std::endl;
	for (unsigned int i = 0; i < awe_array.size(); i++)
		std::cout << awe_array[i] << std::endl;
	try {
		std::cout << "Trying to access index 3:" << std::endl;
		std::cout << awe_array[3] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Index given is out of limits" << std::endl;
	}
	return 0;
}
