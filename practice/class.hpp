/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   class.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:47:11 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 18:32:46 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

class test {
public:
    int         value;

    test(void);
    ~test(void);
    
    void        fn(void) const;
    void        valuechange(test *inst, int n);
};

#endif