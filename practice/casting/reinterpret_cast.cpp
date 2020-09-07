/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reinterpret.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:04:06 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/07 14:23:27 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// reinterpet_cast is used to convert one pointer of another pointer of any type,
// no matter if either class is related to each other or not.
// does not check if the ptr type and data pointer by ptr is the same

int main(void) {
    float a = 420.024f;

    void    *b = &a;                            // implicit promotion -> OK
    int     *c = reinterpret_cast<int *>(b);    // explicit demotion -> OK
    int     &d = reinterpret_cast<int &>(b);    // explicit demotion -> OK

    return 0;
}
