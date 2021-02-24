/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:46:29 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 16:05:09 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	hp = 80;
	type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy): Enemy(copy)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &ref)
{
	Enemy::operator=(ref);
	return (*this);
}
