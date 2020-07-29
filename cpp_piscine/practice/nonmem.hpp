/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nonmem.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:11:41 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 20:58:31 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NONMEM_H
# define NONMEM_H

class test {
public:
    test(void);
    ~test(void);

    static int  getnbinst(void);

private:
    static int  _nbinst;
};

#endif