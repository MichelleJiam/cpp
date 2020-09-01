/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 18:43:53 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/01 18:50:31 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>

class Form {
public:
    Form(void);
    Form(Form const &src);
    Form &operator=(Form const &rhs);
    ~Form(void);

private:
    std::string const   _name;
    bool                _signed;
    int const           _signGrade;
    int const           _execGrade;
};

#endif