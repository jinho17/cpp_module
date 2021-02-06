/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 02:12:38 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/05 03:06:07 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(std::string type, int N)
{
	std::random_device	rd;
	std::string	names[10] = {"Red", "Orange", "Yellow", "Green", "Blue",
							"Purple", "Pink", "White", "Black", "Gray"};
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 9);

	this->type = type;
	this->N = N;
	if (N > 0)
	{
		zombies = new Zombie[N];
		for(int i = 0; i < N; i++)
			zombies[i].init(type, names[dis(gen)]);
	}
	else
		std::cout << "wrong number!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Horde " << type << " is destroyed." << std::endl;
	delete[] zombies;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < N; i++)
		zombies[i].announce();
}
