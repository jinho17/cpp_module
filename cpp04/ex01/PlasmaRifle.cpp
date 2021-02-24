/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:40:46 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 15:32:07 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	name = "Plasma Rifle";
	apcost = 5;
	damage = 21;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy): AWeapon(copy)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &ref)
{
	AWeapon::operator=(ref);
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
