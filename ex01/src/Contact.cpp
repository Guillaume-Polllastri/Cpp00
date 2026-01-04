/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:04:20 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/04 23:49:37 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <iostream>

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

void Contact::display_contact() const {
	std::cout << this->first_name << " | ";
	std::cout << this->last_name << " | ";
	std::cout << this->nickname << " | ";
	std::cout << this->phone_number << " | ";
	std::cout << this->darkest_secret << '\n';
}
