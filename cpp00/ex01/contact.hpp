/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:58:14 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/30 11:38:32 by mjiam         ########   odam.nl         */
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
    std::string printfield(int field) const;
    void        showinformation(std::string info) const;

    void        setindex(int index);
    void        setinformation(std::string input, int field);

private:
    int         _index;
    field       _fields[11];
};

 #endif