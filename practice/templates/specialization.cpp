/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   specialization.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 17:16:02 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/10 18:20:31 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T, typename U>
class Pair {
public:
    Pair<T, U>(T const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs) {
        std::cout << "Generic template" << std::endl;
        std::cout << "lhs: " << _lhs << " rhs: " << _rhs << std::endl;
        return;
    }
    ~Pair<T, U>(void) {}

    T const &fst(void) const { return this->_lhs; }
    U const &snd(void) const { return this->_rhs; }

private:
    T const &_lhs;
    U const &_rhs;
    
    Pair<T, U>(void);
};

// partial specialization
template<typename U>
class Pair<int, U> {
public:
    Pair<int, U>(int lhs, U const &rhs) : _lhs(lhs), _rhs(rhs) {
        std::cout << "Int partial specialization" << std::endl;
        std::cout << "lhs: " << _lhs << " rhs: " << _rhs << std::endl;
        return;
    }
    ~Pair<int, U>(void) {}

    int     fst(void) const { return this->_lhs; }
    U const &snd(void) const { return this->_rhs; }

private:
    int     _lhs;
    U const &_rhs;

    Pair<int, U>(void);
};

// full specialization - specifying that if types are following ones, 
// our specific code is used; otherwise the default is used
template<>
class Pair<bool,bool> {
public:
    Pair<bool,bool>(bool lhs, bool rhs) {
        std::cout << "Bool/bool specialization" << std::endl;
        this->_n = 0;
        this->_n != static_cast<int>(lhs) << 0;
        this->_n != static_cast<int>(rhs) << 1;
        return;
    }
    ~Pair<bool,bool>(void) {}

    bool    fst(void) const { return (this->_n & 0x01); }
    bool    snd(void) const { return (this->_n & 0x02); }

private:
    int _n;

    Pair<bool,bool>(void);
};

template<typename T, typename U>
std::ostream    &operator<<(std::ostream &o, Pair<T,U> const &p) {
    o << "Pair(" << p.fst() << ", " << p.snd() << ")";
    return o;
}

std::ostream    &operator<<(std::ostream &o, Pair<bool,bool> const &p) {
    o << std::boolalpha << "Pair(" << p.fst() << ", " << p.snd() << ")";
    return o;
}

int main(void) {
    Pair<int,int>               p1(4, 2);
    Pair<std::string,float>     p2(std::string("Pi"), 3.14f);
    Pair<float,bool>            p3(4.2f,true);
    Pair<bool,bool>             p4(true,false);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;
    return 0;
}
