/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:08:42 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/07 14:01:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
	Contact	contacts[8];
	int		contact_count;
	int		oldest_index_contact;

public:
	PhoneBook();
	void 	add_new_contact();
	int		display_all_contact() const;
	void	display_specify_contact() const;
};

#endif