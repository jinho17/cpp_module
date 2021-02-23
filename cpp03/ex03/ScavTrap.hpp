/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:41:35 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:06:58 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
private:
	ScavTrap();

protected:
	static std::string challengePool[5];

public:
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &ref);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void challengeNewcomer(void);
};

#endif
