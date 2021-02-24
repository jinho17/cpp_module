/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:45:08 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 16:59:28 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	hp = 170;
	type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy): Enemy(copy)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &ref)
{
	Enemy::operator=(ref);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
