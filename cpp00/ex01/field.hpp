/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   field.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:38:20 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 21:30:28 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIELD_H
# define FIELD_H

#include <iostream>

class field {
public:
	field(std::string name);
	~field();

	std::string	getvalue(int field) const;

	void		setvalue(std::string input);

private:
	std::string _name;
	std::string	_value;
};

#endif