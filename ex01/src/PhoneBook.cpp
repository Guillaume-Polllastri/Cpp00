/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:04:17 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/05 00:12:50 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <string>
#include <cstdio>

PhoneBook::PhoneBook() : contact_count(0), oldest_index_contact(0) {
}

void PhoneBook::add_new_contact()
{
	std::string p1;
	std::string p2;
	std::string p3;
	std::string p4;
	std::string p5;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, p1);
	if (std::cin.eof() == 1)
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your last name: ";
	std::getline(std::cin, p2);
	if (std::cin.eof() == 1)
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, p3);
	if (std::cin.eof() == 1)
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, p4);
	if (std::cin.eof() == 1)
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, p5);
	if (std::cin.eof() == 1)
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	this->contacts[contact_count].set_contact(p1, p2, p3, p4, p5);
	this->contact_count++;
	std::cout << this->contact_count << '\n';
}

int PhoneBook::get_contact_count() const
{
	return (this->contact_count);
}
