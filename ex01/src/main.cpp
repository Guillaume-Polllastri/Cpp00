/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 18:45:39 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/04 22:33:49 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "../includes/Contact.hpp"

int	main()
{
	Contact	test;
	std::string p1;
	std::string p2;
	std::string p3;
	std::string p4;
	std::string p5;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, p1);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, p2);
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, p3);
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, p4);
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, p5);
	test.set_contact(p1, p2, p3, p4, p5);
	test.display_contact();
	return (0);
}