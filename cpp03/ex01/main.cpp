/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 21:35:59 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/12 17:17:49 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap	fr4g("Fraggy McFragFace");
	FragTrap	fr5g;

	srand(time(NULL));
	fr4g.meleeAttack("Random McRandoFace");
	fr4g.takeDamage(20);
	fr5g.rangedAttack("Random McRandoFace");
	fr5g.takeDamage(10);
	fr5g.vaulthunter_dot_exe("Random McRandoFace");
	fr4g.takeDamage(50);
	fr4g.beRepaired(55);
	FragTrap	fr6g(fr4g);
	fr6g.beRepaired(100);
	fr5g.takeDamage(100);
	fr6g.vaulthunter_dot_exe("Random McRandoFace");
	fr6g.vaulthunter_dot_exe("Random McRandoFace");
	std::cout << "Victory! Only dust remains of " <<
		"\x1B[35m<Random McRandoFace>\033[0m\n" << std::endl;
	return 0;
}
