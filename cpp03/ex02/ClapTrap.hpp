/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 01:36:17 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:38:14 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	ClapTrap();

	int hit;
	int maxHit;
	int energy;
	int maxEnergy;
	int level;
	std::string name;
	int meleeDamage;
	int rangedDamage;
	int armorDamageReduction;

public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator=(ClapTrap const &ref);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
