/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:03:35 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:32:20 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap " << name << " is created." << std::endl;
	hit = this->FragTrap::hit;
	maxHit = this->FragTrap::hit;
	energy = this->NinjaTrap::energy;
	maxEnergy = this->NinjaTrap::maxEnergy;
	meleeDamage = this->NinjaTrap::meleeDamage;
	rangedDamage = this->FragTrap::rangedDamage;
	armorDamageReduction = this->FragTrap::armorDamageReduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << name << " is destroyed." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy): ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	std::cout << "SuperTrap " << name << " is created." << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &ref)
{
	ClapTrap::operator=(ref);
	return (*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
