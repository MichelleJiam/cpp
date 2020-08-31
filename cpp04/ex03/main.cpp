/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:36:51 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:18:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void) {
    IMateriaSource  *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter      *me = new Character("me");
    AMateria        *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter      *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(1, *bob);

    std::cout << "\n--- Testing Materia limit ---" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    IMateriaSource  *src2 = new MateriaSource();
    src2->learnMateria(new Cure());
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("ice"));
    me->equip(src2->createMateria("cure"));
    me->use(3, *bob);
    me->unequip(3);
    me->equip(src2->createMateria("cure"));
    me->use(3, *bob);
    delete src2;
    delete bob;
    delete me;
    delete src;
    return 0;
}
