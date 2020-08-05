/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:37:49 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:57:02 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include "Brain.hpp"

class Human {
public:
    Human(void);
    ~Human(void);

    Brain const &getBrain(void) const;
    Brain const *identify(void) const;

private:
    Brain const _brain;
};

#endif