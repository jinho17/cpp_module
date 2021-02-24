/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:44:01 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 17:01:36 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(): hp(0), type(std::string())
{
}

Enemy::Enemy(int hp, std::string const &type): hp(hp), type(type)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const &copy)
{
	hp = copy.hp;
	type = copy.type;
}

Enemy &Enemy::operator=(Enemy const &ref)
{
	hp = ref.hp;
	type = ref.type;
	return(*this);
}

std::string const Enemy::getType() const
{
	return (type);
}

int Enemy::getHP() const
{
	return (hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	hp -= damage;
	if (hp < 0)
		hp = 0;
}
