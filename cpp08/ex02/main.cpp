/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:08:53 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/22 16:24:41 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream> // cout
#include <list>
#include <vector>

template <typename T>
void    mutantstacktester(T &container) {
    container.push(5);
    container.push(17);
    std::cout << "Last element of mutantstack: " << container.top() <<
        std::endl;
    container.pop();
    std::cout << "Size after pop: " << container.size() << std::endl;
    container.push(3); container.push(5); container.push(737);
    std::cout << "Size after push: " << container.size() << std::endl;
    typename T::iterator                it = container.begin();
    typename T::iterator                ite = container.end();
    std::cout << "Contents of MutantStack:" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Contents in reverse order:" << std::endl;
    std::copy(container.rbegin(), container.rend(),
        std::ostream_iterator<int>(std::cout, "\n"));
    return;
}

void    basiclisttest(std::list<int> &list) {
    list.push_back(5);
    list.push_back(17);
    std::cout << "Last element of list: " << *list.rbegin() <<
        std::endl;
    list.pop_back();
    std::cout << "Size after pop: " << list.size() << std::endl;
    list.push_back(3); list.push_back(5); list.push_back(737);
    std::cout << "Size after push: " << list.size() << std::endl;
    std::list<int>::iterator            l_it = list.begin();
    std::list<int>::iterator            l_ite = list.end();
    std::cout << "Contents of list:" << std::endl;
    while (l_it != l_ite) {
        std::cout << *l_it << std::endl;
        ++l_it;
    }
    std::cout << "Contents in reverse order:" << std::endl;
    std::copy(list.rbegin(), list.rend(),
        std::ostream_iterator<int>(std::cout, "\n"));
    return;
}

int     main(void) {
    std::cout << "--- Output with std::list<int> ---" << std::endl;
    std::list<int>                      list;
    basiclisttest(list);

    std::cout << "\n--- Output with MutantStack<int> ---\n";
    MutantStack<int>                    mstack;
    mutantstacktester(mstack);

    std::cout << "\n--- Test with stack copy of mstack ---\n";
    std::stack<int>                     s(mstack);
    std::cout << "Size: " << s.size() << std::endl;

    std::cout << "\n--- Output with MutantStack<int, deque> ---\n";
    MutantStack<int, std::deque<int> >  d_mstack;
    mutantstacktester(d_mstack);

    std::cout << "\n--- Output with MutantStack<int, vector> ---\n";
    MutantStack<int, std::vector<int> > v_mstack;
    mutantstacktester(v_mstack);
    return 0;
}
