/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   field.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:38:20 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 12:41:54 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIELD_H
# define FIELD_H

#include <iostream>

class field {
public:
	field(void);
	~field(void);

	std::string getname(void) const;
	std::string	getvalue(void) const;

	void		setname(std::string name);
	void		setvalue(std::string input);

private:
	std::string _name;
	std::string	_value;
};

#endif