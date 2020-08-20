/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:35:59 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/20 18:11:30 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void) {

	// FragTrap	fr4g("Fraggy McFragFace");
	// ScavTrap	sc4v("Scavvy McScavFace");
	NinjaTrap	ninj4("Ninja McNinFace");
	SuperTrap	sup3r("Super McSupFace");
	SuperTrap	sup4r(sup3r);

	srand(time(NULL));
	// sc4v.rangedAttack("Newbie McNewFace");
	// sc4v.takeDamage(110);
	// std::cout << "The ScavTrap seems to admit defeat. " << 
	// 	"But there's one more step." << std::endl;
	// sc4v.challengeNewcomer("Newbie McNewFace");
	// std::cout << "Newcomer has won entrance to the lair. " << 
	// 	"But a new challenge soon emerges." << std::endl;
	// fr4g.rangedAttack("Newbie McNewFace");
	sup3r.vaulthunter_dot_exe("Newbie McNewFace");
	sup4r.ninjaShoebox(ninj4);
	std::cout << "\x1B[35m<Newbie McNewFace>\033[0m " <<
		"has been defeated!" << std::endl << std::endl;
	return 0;
}
