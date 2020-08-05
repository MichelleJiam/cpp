/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ref.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 13:38:53 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 15:49:49 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// pointers allow pointing to something that might not exist at the beginning,
// whereas references have to be initialised with a point to something existant.
// pointers are for things that may not exist or may change at some point;
// references are for things which always exist and never change.

class student {
    private:
        std::string _login;

    public:
        student(std::string const &login) : _login(login) {
        }
        std::string         &getloginref() {
            return this->_login;
        }
        std::string const   &getloginrefconst() const {
            return this->_login;
        }
        std::string         *getloginptr() {
            return &(this->_login);
        }
        std::string const   *getloginptrconst() const {
            return &(this->_login);
        }
};

void    byptr(std::string *str) {
    *str += " and chocolate";
}

void    byconstptr(std::string const *str) {
    std::cout << *str << std::endl;
}

void    byref(std::string &str) {
    str += " and candies";
}

void    byconstref(std::string const &str) {
    std::cout << str << std::endl;
}

int     main() {
// references as variables
    int candies = 42;
    int *candiesptr = &candies;
    int &candiesref = candies;
    // int &candiesref2; 
        // this is wrong, a reference cannot be uninitialised.
        // it's also a constant, so cannot be pointed to something later.
    std::cout << candies << " " << *candiesptr << " " << candiesref << std::endl;
    // candiesref does not need to be dereferenced because it is already
    // a dereferenced pointer.
    *candiesptr = 21;
    std::cout << candies << std::endl;
    candiesref = 13;
    std::cout << candies << std::endl;

// references as parameters
    std::string str = "I like cookies";
    std::cout << str << std::endl;
    byptr(&str);
    byconstptr(&str);
    str = "I like gummy bears";
    std::cout << str << std::endl;
    byref(str);
    byconstref(str);

// references as function returns
    student adam = student("afoo");
    student bill = student("bbar");
    std::cout << adam.getloginrefconst() << " " << bill.getloginrefconst() << std::endl;
    std::cout << *(adam.getloginptrconst()) << " " << *(bill.getloginptrconst()) << std::endl;
    adam.getloginref() = "adamfoo";
    std::cout << adam.getloginrefconst() << std::endl;
    *(bill.getloginptr()) = "billybar";
    std::cout << bill.getloginrefconst() << std::endl;

    student &ref = bill;
    std::cout << "Login ref test: " << ref.getloginref() << std::endl;
    return 0;
}