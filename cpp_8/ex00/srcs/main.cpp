/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:25:05 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 14:19:31 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

int	main(void) {

    std::vector<int> test;
    std::list<int> test2;

    test.push_back(5);
    test.push_back(8);
    test.push_back(94);
    test.push_back(7);

    test2.push_back(900);
    test2.push_back(8);
    test2.push_back(94);
    test2.push_back(7);

    std::cout << "  ~TEST 1~    " << std::endl;
    easyfind(test, 5);
    easyfind(test, 900);

    std::cout << "  ~TEST 2~    " << std::endl;
    easyfind(test2, 5);
    easyfind(test2, 900);

    return (0);
}
