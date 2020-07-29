/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pubpriv.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:16:50 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/27 17:32:46 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUBPRIV_H
# define PUBPRIV_H

// publicvar and publicfn are visible and usable from inside and outside 
// the class, while privatevar and privatefn are only usable/visible from within.
// Always consider whether class items need to/should be accessible for the public.
class test3 {
public:
    int     publicvar;

    test3(void);
    ~test3(void);

    void    publicfn(void) const;

private:
    int     _privatevar; // _ prefix for private identifiers are common convention

    void    _privatefn(void) const;
};

#endif