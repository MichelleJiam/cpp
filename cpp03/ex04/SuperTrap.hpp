/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 14:47:16 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/20 14:47:16 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	SuperTrap &operator=(SuperTrap const &rhs);
	~SuperTrap(void);

	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
};

#endif