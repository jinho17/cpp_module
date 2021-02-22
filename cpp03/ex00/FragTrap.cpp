/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:41:59 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/13 18:54:59 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::attackPool[5] = {
	"attack1",
	"attack2",
	"attack3",
	"attack4",
	"attack5",
};

FragTrap::FragTrap(std::string name)
{
	std::cout << name << " constructor called" << std::endl;
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
	std::cout << name << " destructor called" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << rangedDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << meleeDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount - armorDamageReduction;
	if (damage < 0)
		damage = 0;
	hit -= damage;
	std::cout << name << " take " << damage << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount + hit > maxHit)
	{
		amount = maxHit - hit;
		hit = maxHit;
	}
	else
		hit += amount;
	std::cout << name << " is repaired " << amount << " points!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (energy >= 25)
	{
		energy -= 25;
		std::cout << name << " : " << FragTrap::attackPool[rand() % 5] << std::endl
				<< "FR4G-TP " << name << " attacks " << target << " at range, causing " << ((rand() % meleeDamage) + 1) << " points of damage!" << std::endl;
	}
	else
		std::cout << name << " is out of energy!" << std::endl;
}
