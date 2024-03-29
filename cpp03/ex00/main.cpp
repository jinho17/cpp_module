/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:40:39 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:07:04 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
}
