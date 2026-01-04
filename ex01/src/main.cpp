/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 18:45:39 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/05 00:14:25 by gpollast         ###   ########.fr       */
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

	back:
	std::cout << "Enter a command: ";
	std::getline(std::cin, a1);
	if (std::cin.eof() == 1)
		return (1);
	if (a1.compare("ADD") && a1.compare("SEARCH") && a1.compare("EXIT"))
	{
		std::cout << "Bad command\n";
		goto back;
	}
	if (!a1.compare("ADD"))
	{
		test.add_new_contact();
		goto back;
	}
	if (!a1.compare("SEARCH"))
	{
	}
	return (0);
}