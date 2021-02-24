/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:43:04 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 14:00:54 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &copy): Victim(copy)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &ref)
{
	name = ref.name;
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}
