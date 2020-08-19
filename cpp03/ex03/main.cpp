/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:35:59 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/19 20:15:05 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void) {

	FragTrap	fr4g("Fraggy McFragFace");
	FragTrap	fr5g(fr4g);
	ScavTrap	sc4v("Scavvy McScavFace");
	ScavTrap	sc5v(sc4v);
	NinjaTrap	ninj4("Ninja McNinFace");
	NinjaTrap	*ninj5 = new NinjaTrap(ninj4);

	srand(time(NULL));
	sc4v.rangedAttack("Newbie McNewFace");
	sc5v.meleeAttack("Newbie McNewFace");
	sc4v.takeDamage(110);
	std::cout << "The ScavTraps seems to admit defeat. " << 
		"But there's one more step." << std::endl;
	sc5v.challengeNewcomer("Newbie McNewFace");
	std::cout << "Newcomer has won entrance to the lair. " << 
		"But a new challenge soon emerges." << std::endl;
	fr4g.meleeAttack("Newbie McNewFace");
	fr4g.takeDamage(3);
	fr5g.vaulthunter_dot_exe("Newbie McNewFace");
	fr5g.takeDamage(120);
	ninj4.meleeAttack("Newbie McNewFace");
	ninj5->rangedAttack("Newbie McNewFace");
	ninj4.ninjaShoebox(fr4g);
	ninj4.ninjaShoebox(sc5v);
	ninj4.ninjaShoebox(*ninj5);
	std::cout << "\x1B[35m<Newbie McNewFace>\033[0m " <<
		"has been defeated!" << std::endl << std::endl;
	delete ninj5;
	return 0;
}
