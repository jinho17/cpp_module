/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 01:35:59 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:05:08 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
	std::cout << "ClapTrap " << name << " is created." << std::endl;
	hit = 100;
	maxHit = 100;
	energy = 0;
	maxEnergy = 0;
	level = 1;
	meleeDamage = 0;
	rangedDamage = 0;
	armorDamageReduction = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << copy.name << " is created." << std::endl;
	hit = copy.hit;
	maxHit = copy.maxHit;
	energy = copy.energy;
	maxEnergy = copy.maxEnergy;
	level = copy.level;
	this->name = copy.name;
	meleeDamage = copy.meleeDamage;
	rangedDamage = copy.rangedDamage;
	armorDamageReduction = copy.armorDamageReduction;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ref)
{
	hit = ref.hit;
	maxHit = ref.maxHit;
	energy = ref.energy;
	maxEnergy = ref.maxEnergy;
	level = ref.level;
	this->name = ref.name;
	meleeDamage = ref.meleeDamage;
	rangedDamage = ref.rangedDamage;
	armorDamageReduction = ref.armorDamageReduction;
	return (*this);
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " attacks " << target << " at range, causing " << rangedDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " attacks " << target << " at melee, causing " << meleeDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armorDamageReduction;
	if (damage < 0)
		damage = 0;
	hit -= damage;
	if (hit < 0)
		hit = 0;
	std::cout << name << " take " << damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + hit > maxHit)
	{
		amount = maxHit - hit;
		hit = maxHit;
	}
	else
		hit += amount;
	std::cout << name << " is repaired " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName(void)
{
	return (name);
}
