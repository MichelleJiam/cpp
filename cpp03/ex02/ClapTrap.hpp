/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 17:49:14 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/14 17:49:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <ctime>
#include <cstdlib> // for Linux/Windows compilation

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	virtual ~ClapTrap(void);

	virtual void	rangedAttack(std::string const &target) = 0;
	virtual void	meleeAttack(std::string const &target) = 0;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:
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