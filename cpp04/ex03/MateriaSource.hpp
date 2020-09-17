/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/27 17:40:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 16:17:02 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    MateriaSource(void);
    MateriaSource(MateriaSource const &src);
    MateriaSource &operator=(MateriaSource const &rhs);
    virtual ~MateriaSource(void);

    void        learnMateria(AMateria *materia);
    AMateria    *createMateria(std::string const &type);

private:
    void        _destroyMateria(void);
    
    AMateria    *_materia[4];
};

#endif