/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:48:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/18 17:27:59 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

int	main(void)
{
	int			exit;
	std::string	read;
	PhoneBook	Phonebook;

	exit = 0;
	while (!exit)
	{
		std::getline(std::cin,read);
		if (read.compare("ADD") == 0)
			Phonebook.AddContact();
		else if (read.compare("SEARCH") == 0)
			Phonebook.GetContact();
		else if (read.compare("EXIT") == 0)
			exit++;
		else
			std::cout << "Please enter a valid command : ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}
