/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 22:47:55 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:16:00 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	std::cout << "NinjaTrap " << name << " is created." << std::endl;
	hit = 60;
	maxHit = 60;
	energy = 120;
	maxEnergy = 120;
	meleeDamage = 60;
	rangedDamage = 5;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << name << " is destroyed." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy): ClapTrap(copy)
{
	std::cout << "NinjaTrap " << name << " is created." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &ref)
{
	ClapTrap::operator=(ref);
	return(*this);
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << name << " attacks " << target << "! (Ranged attack : " << rangedDamage << "points)" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << name << " attacks " << target << "! (melee attack : " << meleeDamage << "points)" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << clap.getName() << " sees " << name << " and runs away." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << name << " tries to attack " << frag.getName() << " but fails." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << name << " successed in attacking " << scav.getName() << "!" << std::endl;
	scav.takeDamage(rangedDamage);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << name << " recommanded " << ninja.getName() << " to repair it." << std::endl;
	ninja.beRepaired(50);
}
