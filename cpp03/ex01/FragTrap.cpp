/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:41:59 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:00:41 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "FR4G-TP " << name << " is created." << std::endl;
	hit = 100;
	maxHit = 100;
	energy = 100;
	maxEnergy = 100;
	level = 1;
	this->name = name;
	meleeDamage = 30;
	rangedDamage = 20;
	armorDamageReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << name << " is destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "FR4G-TP " << copy.name << " is created." << std::endl;
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

FragTrap &FragTrap::operator=(FragTrap const &ref)
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << rangedDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << meleeDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armorDamageReduction;
	if (damage < 0)
		damage = 0;
	hit -= damage;
	if (hit < 0)
		hit = 0;
	std::cout << "FR4G-TP " << name << " take " << damage << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + hit > maxHit)
	{
		amount = maxHit - hit;
		hit = maxHit;
	}
	else
		hit += amount;
	std::cout << "FR4G-TP " << name << " is repaired " << amount << " points!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (energy >= 25)
	{
		energy -= 25;
		std::cout << "FR4G-TP " << name << " (" << FragTrap::attackPool[rand() % 5] << ")" << " attacks " << target << " at range, causing " << (rand() % 50) << " points of damage!" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << name << " lacks energy!" << std::endl;
}

std::string FragTrap::attackPool[5] = {
	"Drop the Hammer",
	"Killbot",
	"Coincidental Combustion",
	"Repulsive",
	"I Am Rubber, You Are"
};
