/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:19:58 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/05 02:06:10 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(this->type, name);
	return (newZombie);
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *ranZombie;
	std::random_device	rd;
	std::string	names[10] = {"Red", "Orange", "Yellow", "Green", "Blue",
							"Purple", "Pink", "White", "Black", "Gray"};

	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 9);
	ranZombie = new Zombie(this->type, names[dis(gen)]);
	ranZombie->announce();
	return (ranZombie);
}
