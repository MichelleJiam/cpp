/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   default.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:54:48 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/10 17:11:06 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

// if a type is not specified, it is instanciated as a float by default
template<typename T = float>
class   Vertex {
public:
    Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
    ~Vertex(void) {}

    T const &getX(void) const { return this->_x; }
    T const &getY(void) const { return this->_y; }
    T const &getZ(void) const { return this->_z; }

private:
    T const _x;
    T const _y;
    T const _z;

    Vertex(void);
};

template<typename T>
std::ostream &operator<<(std::ostream &o, Vertex<T> const &v) {
    std::cout.precision(1);
    o << std::setiosflags(std::ios::fixed);
    o << "Vertex(" ;
    o << v.getX() << ", ";
    o << v.getY() << ", ";
    o << v.getZ() << ")";
    return o;
}

int main(void) {
    Vertex<int> v1(12,23,34);
    Vertex<>    v2(12,23,34); // because type is not specified, default float type is used

    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
}
