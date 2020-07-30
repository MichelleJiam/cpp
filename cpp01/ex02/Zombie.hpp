/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:37:22 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/30 14:40:06 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
public:
	Zombie(void);
	~Zombie(void);

	void	announce(void) const;

private:
	std::string	_type;
	std::string	_name;
};

#endif