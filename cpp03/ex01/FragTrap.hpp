/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:40:58 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 02:00:01 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{
private:
	FragTrap();

	int hit;
	int maxHit;
	int energy;
	int maxEnergy;
	int level;
	std::string name;
	int meleeDamage;
	int rangedDamage;
	int armorDamageReduction;
	static std::string attackPool[5];

public:
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &ref);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
