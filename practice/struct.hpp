/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   struct.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:37:10 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:39:56 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H


// structs are public by default, so not specifying public/private sets 
// the scope to public. Therefore, using class instead of structs is more secure.
struct test2 {
    int         value;

    test2(void);
    ~test2(void);
    
    void        fn(void);
};

#endif