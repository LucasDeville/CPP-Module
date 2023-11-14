/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:26:58 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:59 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "PmergeMe.hpp"

void    displayValue(int argc, char **argv) {

    std::cout << "Before: ";
    for (int i = 0; argv[i] && i < 4; i++)
        std::cout << argv[i] << " ";
    if (argc > 6)
        std::cout << "[...]" << std::endl;
    else if (argc == 6)
        std::cout << argv[4] << std::endl;
    else
        std::cout << std::endl;
}

int	main(int argc, char **argv) {

    if (argc < 2)
    {
        std::cout << "Error" << std::endl;
        return (-1);
    }
    ++argv;
    
    PmergeMe< std::vector<int> > test;
    test.setArg(argv);

    PmergeMe< std::deque<int> > test2;
    test2.setArg(argv);
    
    displayValue(argc, argv);
    test.displayResult();

    return (0);
}
