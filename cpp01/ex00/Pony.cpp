/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:01:43 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/04 15:15:46 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
}

Pony::~Pony()
{
	std::cout << "End of " << name << std::endl;
}

void Pony::crying(void)
{
	std::cout << name << " is crying" << std::endl;
}

void Pony::eating(void)
{
	std::cout << name << " is eating" << std::endl;
}

void Pony::sleeping(void)
{
	std::cout << name << " is sleeping" << std::endl;
}
