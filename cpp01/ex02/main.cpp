/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:38:43 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/05 02:53:14 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent newZombieTest;
	newZombieTest.setZombieType("make_newZombie");
	Zombie *newZ1 = newZombieTest.newZombie("Zombie1");
	newZ1->announce();
	delete newZ1;
	Zombie *newZ2 = newZombieTest.newZombie("Zombie2");
	newZ2->announce();
	delete newZ2;

	ZombieEvent ranZombieTest;
	ranZombieTest.setZombieType("make_ranZombie");
	Zombie *ranZ1 = ranZombieTest.randomChump();
	delete ranZ1;
	Zombie *ranZ2 = ranZombieTest.randomChump();
	delete ranZ2;
}
