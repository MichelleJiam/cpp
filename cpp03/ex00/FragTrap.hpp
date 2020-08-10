/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:27:30 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/10 22:08:27 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>

class FragTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap(void);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_maxenergy;
	unsigned int	_energy;
	unsigned int	_maxhp;
	unsigned int	_hp;
	unsigned int	_level;
	unsigned int	_melee;
	unsigned int	_ranged;
	unsigned int	_armour;
};

#endif