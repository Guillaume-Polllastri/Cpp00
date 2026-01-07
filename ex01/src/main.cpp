/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 18:45:39 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/07 15:54:56 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	main()
{
	PhoneBook	test;
	std::string a1;
	std::string a2;

	while (true)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, a1);
		if (std::cin.eof() == 1)
		{
			std::cout << '\n';
			return (1);
		}
		if (a1.compare("ADD") && a1.compare("SEARCH") && a1.compare("EXIT"))
		{
			std::cout << "Error : Bad command\n\n";
			continue;
		}
		if (!a1.compare("ADD"))
		{
			test.add_new_contact();
			continue;
		}
		if (!a1.compare("SEARCH"))
		{
			if (!test.display_all_contact())
				test.display_specify_contact();
			continue;
		}
		if (!a1.compare("EXIT"))
			break;
	}
	return (0);
}
