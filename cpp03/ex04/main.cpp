/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:35:59 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/20 20:06:56 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void) {
	NinjaTrap	ninj4("Ninja McNinFace");
	SuperTrap	sup3r("Super McSupFace");
	SuperTrap	sup4r(sup3r);

	srand(time(NULL));
	sup3r.vaulthunter_dot_exe("Newbie McNewFace");
	sup4r.rangedAttack("Newbie McNewFace");
	sup3r.meleeAttack("Newbie McNewFace");
	sup4r.ninjaShoebox(ninj4);
	std::cout << "\x1B[35m<Newbie McNewFace>\033[0m " <<
		"has been defeated!" << std::endl << std::endl;
	return 0;
}
