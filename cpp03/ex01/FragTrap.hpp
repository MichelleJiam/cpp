/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:27:30 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/12 17:24:16 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>
#include <ctime>
#include <cstdlib> // for Linux/Windows compilation

class FragTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap(void);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			vaulthunter_dot_exe(std::string const &target);
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