/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:39:10 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 15:05:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_H
#define IMATERIA_SOURCE_H

#include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource(void) {};

    virtual void        learnMateria(AMateria *materia) = 0;
    virtual AMateria    *createMateria(std::string const &type) = 0;
};

#endif