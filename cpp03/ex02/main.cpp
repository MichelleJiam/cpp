/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:35:59 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/18 19:12:32 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void) {

	FragTrap	fr4g("Fraggy McFragFace");
	FragTrap	fr5g(fr4g);
	ScavTrap	sc4v("Scavvy McScavFace");
	ScavTrap	*sc5v = new ScavTrap(sc4v);

	srand(time(NULL));
	sc4v.rangedAttack("Newbie McNewFace");
	sc5v->meleeAttack("Newbie McNewFace");
	sc4v.takeDamage(110);
	std::cout << "The ScavTraps seems to admit defeat. " << 
		"But there's one more step." << std::endl;
	sc5v->challengeNewcomer("Newbie McNewFace");
	std::cout << "Newcomer has won entrance to the lair. " << 
		"But a new challenge soon emerges." << std::endl;
	fr4g.meleeAttack("Newbie McNewFace");
	fr4g.takeDamage(3);
	fr5g.vaulthunter_dot_exe("Newbie McNewFace");
	fr5g.takeDamage(120);
	fr4g.beRepaired(10);
	fr4g.vaulthunter_dot_exe("Newbie McNewFace");
	fr4g.takeDamage(105);
	std::cout << "\x1B[35m<Newbie McNewFace>\033[0m " <<
		"emerges victorious!" << std::endl << std::endl;
	delete sc5v;
	return 0;
}
