/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:47:39 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/28 16:20:44 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name(std::string()), ap(0), weapon(NULL)
{
}

Character::Character(std::string const &name): name(name), weapon(NULL)
{
	ap = 40;
}

Character::~Character()
{
}

Character::Character(Character const &copy):
	name(copy.name), ap(copy.ap), weapon(copy.weapon)
{
}

Character &Character::operator=(Character const &ref)
{
	name = ref.name;
	ap = ref.ap;
	weapon = ref.weapon;
	return (*this);
}

void Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (!weapon || !enemy)
		return;
	if (ap < weapon->getAPCost())
		return;
	ap -= weapon->getAPCost();
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const Character::getName() const
{
	return (name);
}

int Character::getAp() const
{
	return (ap);
}
AWeapon *Character::getWeapon() const
{
	return (weapon);
}

std::ostream &operator<<(std::ostream &out, Character &chara)
{
	out << chara.getName() << " has " << chara.getAp();
	if (chara.getWeapon())
		out << " AP and wields a " << chara.getWeapon()->getName() << std::endl;
	else
		out << " AP and is unarmed" << std::endl;
	return (out);
}
