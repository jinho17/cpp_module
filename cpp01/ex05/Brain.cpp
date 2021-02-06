/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:32:09 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/06 18:32:33 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	capacity = 100;
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	std::stringstream addr;

	addr << "0x" << std::uppercase << std::hex << this;
	return (addr.str());
}
