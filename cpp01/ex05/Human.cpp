/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 12:57:29 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 17:57:46 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
}

Human::~Human(void) {
}

Brain const &Human::getBrain(void) const {
    return this->_brain;
}

Brain const *Human::identify(void) const {
    return  this->_brain.identify();
}
