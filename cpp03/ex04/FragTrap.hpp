/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:40:58 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:20:44 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
protected:
	FragTrap();
	static std::string attackPool[5];

public:
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &ref);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
