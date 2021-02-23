/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:40:39 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:08:31 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap fragtrap("frag");
	srand(time(NULL));
	fragtrap.rangedAttack("Tfrag");
	fragtrap.meleeAttack("Tfrag");
	fragtrap.vaulthunter_dot_exe("Tfrag");
	fragtrap.takeDamage(50);
	fragtrap.beRepaired(30);

	std::cout << "----------" << std::endl;
	ScavTrap scavtrap("scav");
	scavtrap.rangedAttack("Tscav");
	scavtrap.meleeAttack("Tscav");
	scavtrap.challengeNewcomer();
	scavtrap.takeDamage(50);
	scavtrap.beRepaired(30);
	std::cout << "----------" << std::endl;
}
