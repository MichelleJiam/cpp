/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:12:31 by mjiam         #+#    #+#                 */
/*   Updated: 2020/07/29 18:17:42 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

class Pony {
public:
    Pony(void);
    ~Pony(void);

    void    ride_pony(void);
    void    brush_pony(void);
    int     getponypower(void) const;

private:
    int     _power;
};

void        ponyOnTheStack(void);
void        ponyOnTheHeap(void);

#endif