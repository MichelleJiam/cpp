/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stl.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:06:48 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/17 14:20:28 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <list>

// class   IOperation;

void    displayInt(int i) {
    std::cout << i << std::endl;
}

int main(void) {
    std::list<int>                      lst1;
    // std::map<std::string, IOperation*>  map1; // map is c++ version of hash table
    std::vector<int>                    v1;
    std::vector<int>                    v2(42, 100); // 42 entries are created initialized to value 100

    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);

    // map1["opA"] = new OperationA;
    // map1["opB"] = new OperationB;

    std::list<int>::const_iterator  it;
    std::list<int>::const_iterator  ite = lst1.end(); // end returns iterator to element after last element

    for (it = lst1.begin(); it != ite; it++) {
        std::cout << *it << std::endl;
    }

    for_each(lst1.begin(), lst1.end(), displayInt);
    return 0;
}
