/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 23:20:15 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/03 20:28:36 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int Phonebook::search_get_index_num(void)
{
	std::string idx_str;
	int			idx;

	std::getline(std::cin, idx_str);
	idx = atoi(idx_str.c_str());
	while (idx < 1 || idx > index)
	{
		std::cout << "* Invalid Index" << std::endl << "> ";
		std::getline(std::cin, idx_str);
		idx = atoi(idx_str.c_str());
	}
	return (idx - 1);
}

Phonebook::Phonebook()
{
	index = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::prompt(void)
{
	std::cout << "* Enter command [ADD, SEARCH, EXIT]" << std::endl << "> ";
}

void Phonebook::add_contact(void)
{
	if (index == 8)
		std::cout << "The phonebook is full!" << std::endl;
	else
	{
		std::cout << "* Input a new contact’s informations" << std::endl;
		if (contact[index].add_contact() > 0)
			index++;
	}
}

void Phonebook::search_contact(void)
{
	if (index == 0)
		std::cout << "The phonebook is empty!" << std::endl;
	else
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0; i < index; i++)
			contact[i].show_contact_head(i);
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "* Input contact index" << std::endl << "> ";
		contact[search_get_index_num()].show_contact();
	}
}
