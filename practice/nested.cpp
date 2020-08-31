/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nested.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 18:25:25 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/31 18:27:51 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class Cat {
public:
    class Leg { // used like a namespace
        //[...]
    };
};

class Dog {
public:
    class Leg {
        //[...]
    };
};

int main(void) {
    Cat         somecat; //
    Cat::Leg    somecatsleg;
}
