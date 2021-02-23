/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:41:23 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:06:40 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V-TP " << name << " is created." << std::endl;
	hit = 100;
	maxHit = 100;
	energy = 50;
	maxEnergy = 50;
	level = 1;
	this->name = name;
	meleeDamage = 20;
	rangedDamage = 15;
	armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << name << " is destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "SC4V-TP " << copy.name << " is created." << std::endl;
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

ScavTrap &ScavTrap::operator=(ScavTrap const &ref)
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at ranged, and " << target << " suffered " << rangedDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at melee, and " << target << " suffered " << meleeDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armorDamageReduction;
	if (damage < 0)
		damage = 0;
	hit -= damage;
	if (hit < 0)
		hit = 0;
	std::cout << "SC4V-TP " << name << " take " << damage << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + hit > maxHit)
	{
		amount = maxHit - hit;
		hit = maxHit;
	}
	else
		hit += amount;
	std::cout << "SC4V-TP " << name << " is repaired " << amount << " points!" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	std::cout << "SC4V-TP" << name << " has new challenge! : " << ScavTrap::challengePool[rand()%5] << std::endl;
}

std::string ScavTrap::challengePool[5] = {
	"Robotic Aspirations",
	"Leap of Faith",
	"Cult of the Vault",
	"Hidden Treasure",
	"Killing Time"
};
