/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:15:01 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/21 21:07:15 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
#define MUTANT_STACK_H

#include <deque>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T,Container> {
public:
    MutantStack(void);
    MutantStack(MutantStack const &other);
    MutantStack &operator=(MutantStack const &other);
    ~MutantStack(void);

    typedef typename std::stack<T,Container>::container_type    container;
    typedef typename container::iterator                        iterator;
    typedef typename container::const_iterator                  const_iterator;
    typedef typename container::reverse_iterator                reverse_iterator;
    typedef typename container::const_reverse_iterator          const_reverse_iterator;
    iterator            begin(void) {
        return this->c.begin(); // c is container member oject in std::stack
    }
    reverse_iterator    rbegin(void) {
        return this->c.rbegin();
    }
    iterator            end(void) {
        return this->c.end();
    }
    reverse_iterator    rend(void) {
        return this->c.rend();
    }
};

template <class T, class Container>
MutantStack<T,Container>::MutantStack(void) {
    return;
}

template <class T, class Container>
MutantStack<T,Container>::MutantStack(MutantStack const &other)
        :   std::stack<T,Container>(other) {
    return;
}

template <class T, class Container>
MutantStack<T,Container>            &MutantStack<T,Container>::operator=(
        MutantStack const &other) {
    if (this != &other) {
        std::stack<T,Container>::operator=(other);
    }
    return *this;
}

template <class T, class Container>
MutantStack<T,Container>::~MutantStack(void) {
    return;
}

#endif