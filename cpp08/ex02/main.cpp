/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:08:53 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/21 21:15:52 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream> // cout
#include <list>

int main(void) {
    std::list<int> list;

    std::cout << "--- Output with std::list<int> ---" << std::endl;
    list.push_back(5);
    list.push_back(17);
    std::cout << "Last element of list: " << *list.crbegin() << std::endl;
    list.pop_back();
    std::cout << "Size after pop: " << list.size() << std::endl;
    list.push_back(3); list.push_back(5); list.push_back(737);
    std::cout << "Size after push: " << list.size() << std::endl;
    std::list<int>::iterator l_it = list.begin();
    std::list<int>::iterator l_ite = list.end();
    ++l_it;
    --l_it;
    std::cout << "Contents of list:" << std::endl;
    while (l_it != l_ite) {
        std::cout << *l_it << std::endl;
        ++l_it;
    }

    std::cout << "\n--- Output with MutantStack<int> ---" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Last element of mutantstack: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
    std::cout << "Size after push: " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    std::cout << "\n--- Test with stack copy of mstack ---" << std::endl;
    std::cout << "Size: " << s.size() << std::endl;

    std::cout << "\n--- Output with MutantStack<int, deque> ---" << std::endl;
    MutantStack<int, std::deque<int> > mstack_d;
    mstack_d.push(5);
    mstack_d.push(17);
    std::cout << "Last element of mutantstack: " << mstack_d.top() << std::endl;
    mstack_d.pop();
    std::cout << "Size after pop: " << mstack_d.size() << std::endl;
    mstack_d.push(3); mstack_d.push(5); mstack_d.push(737); //[...] mstack.push(0);
    std::cout << "Size after push: " << mstack_d.size() << std::endl;
    MutantStack<int, std::deque<int> >::iterator d_it = mstack_d.begin();
    MutantStack<int, std::deque<int> >::iterator d_ite = mstack_d.end();
    ++d_it;
    --d_it;
    while (d_it != d_ite) {
        std::cout << *d_it << std::endl;
        ++d_it;
    }
    return 0;
}
