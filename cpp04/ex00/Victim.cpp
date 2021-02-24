/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:41:46 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 13:56:58 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	this->name = copy.name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(Victim const &ref)
{
	this->name = ref.name;
	return (*this);
}

std::string Victim::getName()
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim &ref)
{
	out << "I'm " << ref.getName() << " and I like otters!" << std::endl;
	return (out);
}
