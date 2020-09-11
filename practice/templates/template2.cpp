/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   template2.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:49:45 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/10 16:50:57 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class List {
public:
    List<T>(T const &content) {};
    List<T>(List<T> const &list) {};
    ~List<T>(void) {};

private:
    T       *_content;
    List<T> *_next;
};

int main(void) {
    List<int>       a(42);
    List<float>     b(3.14f);
    List<List<int>> c(a);

    // code

    return 0;
}
