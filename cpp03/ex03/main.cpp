/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:40:39 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:13:13 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
	ClapTrap claptrap("clap");
	NinjaTrap ninjatrap("ninja");
	ninjatrap.rangedAttack("Tninja");
	ninjatrap.meleeAttack("Tninja");
	ninjatrap.takeDamage(30);
	ninjatrap.ninjaShoebox(claptrap);
	ninjatrap.ninjaShoebox(fragtrap);
	ninjatrap.ninjaShoebox(scavtrap);
	ninjatrap.ninjaShoebox(ninjatrap);
	std::cout << "----------" << std::endl;
}
