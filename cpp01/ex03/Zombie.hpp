/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:37:22 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/03 21:29:30 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
public:
	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);

	void		announce(void) const;
	void		setname(std::string name);
	void		settype(std::string type);

private:
	std::string	_type;
	std::string	_name;
};

#endif