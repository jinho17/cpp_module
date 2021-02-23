/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:41:59 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:45:07 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FR4G-TP " << name << " is created." << std::endl;
	energy = 100;
	maxEnergy = 100;
	meleeDamage = 30;
	rangedDamage = 20;
	armorDamageReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << name << " is destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FR4G-TP " << name << " is created." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ref)
{
	ClapTrap::operator=(ref);
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
