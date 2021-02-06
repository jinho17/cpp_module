/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 02:12:58 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/05 03:11:35 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde horde1("horde1", 3);
	ZombieHorde horde2("horde2", 5);
	horde1.announce();
	std::cout << std::endl;
	horde2.announce();
}
