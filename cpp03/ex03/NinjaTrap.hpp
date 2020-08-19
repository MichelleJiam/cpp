/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 20:29:57 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/18 20:29:57 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap &operator=(NinjaTrap const &rhs);
	~NinjaTrap(void);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			ninjaShoebox(FragTrap const &target);
	void			ninjaShoebox(ScavTrap const &target);
	void			ninjaShoebox(NinjaTrap const &target);
};

#endif