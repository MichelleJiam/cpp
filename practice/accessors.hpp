/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   accessors.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:41:47 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:52:55 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCESSORS_H
# define ACCESSORS_H

// getting and setting allows you to have control over what the user provides
// to check that the value makes sense.
class   test {
public:
    test(void);
    ~test(void);

    int     getvalue(void) const; 
    void    setvalue(int v);
    // common convention to use "get_" and "set_" for the respective functions
    // "const" because a getter only gets in read-only mode and shouldn't alter content

private:
    int     _value;
};

#endif