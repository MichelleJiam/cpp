/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 17:21:50 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/18 18:38:16 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	~ScavTrap(void);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			challengeNewcomer(std::string const &target);

private:
	void			_cinnamonChallenge(std::string const &target);
	void			_babydancerChallenge(std::string const &target);
	void			_iceChallenge(std::string const &target);
	void			_mysterymeatChallenge(std::string const &target);
	void			_pirateMode(std::string const &target);
};

#endif