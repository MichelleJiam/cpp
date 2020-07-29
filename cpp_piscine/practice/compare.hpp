/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   compare.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:54:56 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:56:25 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARE_H
# define COMPARE_H

class test {
public:
    test(int v);
    ~test(void);

    int getvalue(void) const;
    int compare(test *other) const;

private:
    int _value;
};

#endif