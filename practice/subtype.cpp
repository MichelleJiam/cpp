/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   subtype.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:54:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/21 18:28:00 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
public:
    Character(/* args */) {};
    ~Character() {};

    virtual void    sayHello(std::string const &target);
};

class Warrior : public Character {
public:
    Warrior(/* args */) {};
    ~Warrior() {};

    virtual void    sayHello(std::string const &target);
        // a virtual member function is called a method,
        // whose resolution is dynamic and is determined at run time
};

class Cat {
public:
    Cat(/* args */) {};
    ~Cat() {};
};

void    Character::sayHello(std::string const &target) {
    std::cout << "Hello " << target << "!" << std::endl;
}

void    Warrior::sayHello(std::string const &target) {
    std::cout << "I'll cut yer head off, " << target << "!" << std::endl;
}

int main() {
    Warrior     *a = new Warrior(); // this is ok
    Character   *b = new Warrior(); // this is also ok because W is a C
    // Warrior     *c = new Character(); // this is not ok because a C is not a W
        // although W and C are related, W is a C, but the reverse is not true
    // Character    *d = new Cat(); // also not ok because Cat is not a Char.

    a->sayHello("person"); // this outputs the Warrior's version of hello
    b->sayHello("person"); // this outputs the Char.'s version
    return 0;
}
