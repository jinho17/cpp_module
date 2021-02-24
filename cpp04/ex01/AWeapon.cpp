/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:37:17 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 17:08:06 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon():
	name(std::string()), apcost(0), damage(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
	name(name), apcost(apcost), damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &copy):
	name(copy.name), apcost(copy.apcost), damage(copy.damage)
{
}

AWeapon &AWeapon::operator=(AWeapon const &ref)
{
	name = ref.name;
	apcost = ref.apcost;
	damage = ref.damage;
	return (*this);
}

std::string const AWeapon::getName() const
{
	return (name);
}

int AWeapon::getAPCost() const
{
	return (apcost);
}

int AWeapon::getDamage() const
{
	return (damage);
}
