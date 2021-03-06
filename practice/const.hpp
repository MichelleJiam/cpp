/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   const.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:00:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/05 14:32:43 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_H
# define CONST_H

class test {
public:
    float const pi;
    int         value;

    test(float const f);
    ~test(void);
    
    void        fn(void) const;
    test const  *identifyptr() const;
    // test const  &identifyref() const;
};

#endif