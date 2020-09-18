/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:35:58 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/18 21:33:15 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "fill_n_run.hpp"

int main(void) {
    std::list<int>      i_lst;
    std::vector<int>    i_vec;
    std::deque<int>     i_deq;
    std::list<char>     c_lst;

    srand(time(NULL));
    std::cout << "--- Testing with list ---" << std::endl;
    fillnrun(i_lst);
    std::cout << "\n--- Testing with vector ---" << std::endl;
    fillnrun(i_vec);
    std::cout << "\n--- Testing with deque ---" << std::endl;
    fillnrun(i_deq);
    std::cout << "\n--- Testing with char list ---" << std::endl;
    fillnrun(c_lst);
    return 0;
}
