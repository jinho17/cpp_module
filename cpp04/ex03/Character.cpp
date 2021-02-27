/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:59:25 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/27 23:33:16 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): name(name), equipN(0)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::~Character()
{
	for(int i = 0; i < equipN; i++)
		delete inventory[i];
}

Character::Character(Character const &copy)
{
	name = copy.name;
	equipN = 0;
	for(int i = 0; i < copy.equipN; i++)
		equip(copy.inventory[i]->clone());
	for(int i = copy.equipN; i < 4; i++)
		inventory[i] = nullptr;
}

Character &Character::operator=(Character const &ref)
{
	name = ref.name;
	for (int i = 0; i < equipN; i++)
		delete inventory[i];
	equipN = 0;
	for (int i = 0; i < ref.equipN; i++)
		equip(ref.inventory[i]->clone());
	for(int i = equipN; i < 4; i++)
		inventory[i] = nullptr;
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	if (equipN == 4 || !m)
		return ;
	for(int i = 0; i < equipN; i++)
	{
		if (inventory[i] == m)
			return ;
	}
	inventory[equipN++] = m;
}

void Character::unequip(int idx)
{
	if (equipN < 0 || idx >= equipN || inventory[idx] == nullptr)
		return ;
	for(; idx < 3; idx++)
	{
		inventory[idx] = inventory[idx + 1];
		inventory[idx + 1] = nullptr;
	}
	equipN--;
}

void Character::use(int idx, ICharacter &target)
{
	if (equipN < 0 || idx >= equipN || inventory[idx] == nullptr)
		return ;
	inventory[idx]->use(target);
}
