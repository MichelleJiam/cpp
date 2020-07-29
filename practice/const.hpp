/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   const.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:00:05 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 18:27:54 by mjiam         ########   odam.nl         */
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
};

#endif