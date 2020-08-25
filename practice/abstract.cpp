/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   abstract.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:28:19 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/25 13:33:05 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter { // A prefix for "abstract"
public:
    ACharacter(/* args */) {};
    ~ACharacter() {};
    
    virtual void    attack(std::string const &target) = 0; // this is a pure method
        // this method cannot be implemented or instantiated - it is abstract
    void            sayHello(std::string const &target);
};

class Warrior : public ACharacter {
public:
    Warrior(/* args */) {};
    ~Warrior() {};

    virtual void    attack(std::string const &target);
};

void    ACharacter::sayHello(std::string const &target) {
    std::cout << "Hello " << target << "!" << std::endl;
}

void    Warrior::attack(std::string const &target) {
    std::cout << "*attacks " << target << " with a meathammer*" << std::endl;
}

class   ICoffeeMaker { // I prefix for "interface"
public:
    virtual void    fillWaterTank(IWaterSource *src) = 0;
    virtual ICoffee *makeCoffee(std::string const &type) = 0;
        // class with abstract behaviours only is an Interface
        // Interfaces have no attributes
};

int main(void) {
    ACharacter  *a = new Warrior();
    // ACharacter   *b = new ACharacter(); // this is not OK because AChar. is abstract

    a->sayHello("person");
    a->attack("person");
    return 0;
}
