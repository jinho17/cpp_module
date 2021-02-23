/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:41:23 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:16:48 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "SC4V-TP " << name << " is created." << std::endl;
	energy = 50;
	maxEnergy = 50;
	meleeDamage = 20;
	rangedDamage = 15;
	armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << name << " is destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "SC4V-TP " << copy.name << " is created." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &ref)
{
	ClapTrap::operator=(ref);
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
