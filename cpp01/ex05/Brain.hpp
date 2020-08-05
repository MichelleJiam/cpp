/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:37:21 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:57:26 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {
public:
    Brain(void);
    ~Brain(void);

    Brain const *identify(void) const;
};

#endif