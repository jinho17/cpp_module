/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:41 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 15:34:33 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	name = "Power Fist";
	apcost = 8;
	damage = 50;
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &copy): AWeapon(copy)
{
}

PowerFist &PowerFist::operator=(PowerFist const &ref)
{
	AWeapon::operator=(ref);
	return(*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
