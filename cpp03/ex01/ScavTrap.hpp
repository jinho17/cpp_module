/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:41:35 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:03:54 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{
private:
	ScavTrap();

	int hit;
	int maxHit;
	int energy;
	int maxEnergy;
	int level;
	std::string name;
	int meleeDamage;
	int rangedDamage;
	int armorDamageReduction;
	static std::string challengePool[5];

public:
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &ref);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
};

#endif
