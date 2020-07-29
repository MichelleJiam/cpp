/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:58:14 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 21:29:07 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

 #ifndef CONTACT_H
 # define CONTACT_H

#include <string>
#include "field.hpp"

class contact {
public:
    contact(void);
    ~contact(void);

    int         getindex(void) const;
    std::string getinformation(int field) const;
    void        showinformation(std::string info) const;
    static void printfield(int field);

    void        setindex(int index);
    void        setinformation(std::string input, int field);

private:
    int         _index;
    field       _fields[11];
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _login;
    std::string _address;
    std::string _email;
    std::string _phone;
    std::string _dob;
    std::string _meal;
    std::string _underwear;
    std::string _secret;
};

 #endif