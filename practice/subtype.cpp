/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   subtype.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:54:23 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 13:43:18 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
public:
    Character(/* args */) {
        std::cout << "Entering character creation screen\n";
    };
    ~Character() {
        std::cout << "Character destroyed\n";
    };

    // void    sayHello(std::string const &target);
    virtual void    sayHello(std::string const &target);
};

class Warrior : public Character {
public:
    Warrior(/* args */) {
        std::cout << "You have chosen Warrior class\n";
    };
    ~Warrior() {
        std::cout << "Warrior slain\n";
    };

    // void    sayHello(std::string const &target);
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
    b->sayHello("person");
        // without virtual: this outputs the Char.'s version
        // with virtual: outputs Warrior's version
    std::cout << "Now deleting b:\n";
    delete b;
    std::cout << "Now deleting a:\n";
    delete a;
    return 0;
}
