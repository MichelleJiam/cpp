/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newdelete.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 13:30:54 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 13:34:59 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class   student {
    public:
        student(std::string login) : _login(login) {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~student() {
            std::cout << "Student " << this->_login << " has died" << std::endl;
        }

    private:
        std::string _login;
};

int     main() {
    student adam = student("afoo");
    student *bill = new student("bbar");

    delete bill; //bill is destroyed
    return 0; //adam is destroyed
}