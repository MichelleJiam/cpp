/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 17:21:50 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/12 17:40:39 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H


#include <iostream>
#include <ctime>
#include <cstdlib> // for Linux/Windows compilation

class ScavTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	~ScavTrap(void);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			challengeNewcomer(std::string const &target);
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

	void			_chocoBomber(std::string const &target);
	void			_cinnamonChallenge(std::string const &target);
	void			_iceScream(std::string const &target);
	void			_nutBuster(std::string const &target);
	void			_pirateMode(std::string const &target);
};

#endif