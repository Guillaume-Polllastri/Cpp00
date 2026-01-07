/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:04:17 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/07 18:20:56 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

static void replace_tabs(std::string &str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] == '\f' || str[i] == '\t' || str[i] == 'n' || str[i] == 'r' || str[i] == 'v')
			str[i] = ' ';
	}
}

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
	replace_tabs(p1);
	if (std::cin.eof() == 1 || p1.empty())
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your last name: ";
	std::getline(std::cin, p2);
	replace_tabs(p2);
	if (std::cin.eof() == 1 || p2.empty())
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, p3);
	replace_tabs(p3);
	if (std::cin.eof() == 1 || p3.empty())
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, p4);
	replace_tabs(p4);
	if (std::cin.eof() == 1 || p4.empty())
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, p5);
	std::cout << '\n';
	replace_tabs(p5);
	if (std::cin.eof() == 1 || p5.empty())
	{
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << '\n';
		return ;
	}
	this->contacts[oldest_index_contact].set_contact(p1, p2, p3, p4, p5);
	this->oldest_index_contact = (this->oldest_index_contact + 1) % 8;
	if (this->contact_count < 8)
		this->contact_count++;
}

int	PhoneBook::display_all_contact() const
{
	if (this->contact_count == 0)
	{
		std::cout << "There is no contact registered\n\n";
		return (1);
	}
	std::cout << "| " << std::setw(5) << "Index" << " | "
		<< std::setw(10) << "First name" << " | "
		<< std::setw(10) << "Last name" << " | "
		<< std::setw(10) << "Nickname" << " |\n";
	for (int i = 0; i < this->contact_count; i++)
		this->contacts[i].display_contact(i + 1);
	std::cout << '\n';
	return (0);
}

void PhoneBook::display_specify_contact() const
{
	int	entry;

	std::cout << "Enter the index of the contact: ";
	std::cin >> entry;
	if (std::cin.fail())
	{
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << '\n';
			return ;
		}
		std::cout << "Error: index must be a number\n\n";
		std::cin.clear();
		std::cin.ignore(100, '\n');
		return ;
	}
	if (entry <= this->contact_count && entry > 0)
		this->contacts[entry - 1].display_all_info();
	else
		std::cout << "Error: Incorrect index\n\n";
	std::cin.ignore();
	return ;
}
