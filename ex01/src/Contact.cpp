/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:04:20 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/07 13:32:52 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

#include <iostream>
#include <iomanip>

Contact::Contact() {
}

void Contact::set_contact(const std::string fname, 
	const std::string lname, 
	const std::string nick, 
	const std::string phone_num, 
	const std::string secret)
{
	first_name = fname;
	last_name = lname;
	phone_number = phone_num;
	nickname = nick;
	darkest_secret = secret;
}

static std::string	parse_contact_info(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0,9) + '.');
	return (s);
}

void Contact::display_contact(int index) const {
	std::cout << "| " << std::setw(5) <<  index << " | ";
	std::cout << std::setw(10) << parse_contact_info(this->first_name) << " | ";
	std::cout << std::setw(10) << parse_contact_info(this->last_name) << " | ";
	std::cout << std::setw(10) << parse_contact_info(this->nickname) << " | " << "\n";
}

void Contact::display_all_info() const
{
	std::cout << "first name: " << this->first_name << "\n";
	std::cout << "last name: " << this->last_name << "\n";
	std::cout << "nickname: " << this->nickname << "\n";
	std::cout << "phone number: " << this->phone_number << "\n";
	std::cout << "dark secret: " << this->darkest_secret << "\n\n";
}