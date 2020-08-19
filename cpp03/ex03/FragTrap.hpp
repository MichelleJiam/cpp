/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:27:30 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/18 18:38:17 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap(void);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			vaulthunter_dot_exe(std::string const &target);

private:
	void			_chocoBomber(std::string const &target);
	void			_cinnamonChallenge(std::string const &target);
	void			_iceScream(std::string const &target);
	void			_nutBuster(std::string const &target);
	void			_pirateMode(std::string const &target);
};

#endif