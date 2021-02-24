/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:39:30 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 13:58:06 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	name = copy.name;
	title = copy.name;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &ref)
{
	name = ref.name;
	title = ref.name;
	return (*this);
}

std::string Sorcerer::getName()
{
	return (name);
}

std::string Sorcerer::getTitle()
{
	return (title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer &ref)
{
	out << "I am " << ref.getName() << ", " << ref.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
