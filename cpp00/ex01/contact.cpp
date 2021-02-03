/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:41:24 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/03 20:28:09 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

void Contact::print_head(std::string str)
{
	std::cout << "|";
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

Contact::Contact()
{
	field_name[0] = "first name";
	field_name[1] = "last name";
	field_name[2] = "nick name";
	field_name[3] = "login";
	field_name[4] = "postal address";
	field_name[5] = "email address";
	field_name[6] = "phone number";
	field_name[7] = "birthday date";
	field_name[8] = "favorite meal";
	field_name[9] = "underwear color";
	field_name[10] = "darkest secret";
}

Contact::~Contact()
{
}

int Contact::add_contact(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << "* " << field_name[i] << ":" << std::endl << "> ";
		std::getline(std::cin, contact[i]);
	}
	for (int i = 0; i < 11; i++)
	{
		if (contact[i] != "")
			return (1);
	}
	return (-1);
}

void Contact::show_contact_head(int i)
{
	print_head(std::to_string(i + 1));
	print_head(contact[0]);
	print_head(contact[1]);
	print_head(contact[2]);
	std::cout << "|" << std::endl;
}

void Contact::show_contact(void)
{
	for (int i = 0; i < 11; i++)
		std::cout << field_name[i] << ": " << contact[i] << std::endl;
}
