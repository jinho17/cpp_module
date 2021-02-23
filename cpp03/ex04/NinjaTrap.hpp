/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 22:48:16 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:20:56 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
protected:
	NinjaTrap();

public:
	NinjaTrap(std::string name);
	virtual ~NinjaTrap();
	NinjaTrap(NinjaTrap const &copy);
	NinjaTrap &operator=(NinjaTrap const &ref);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void ninjaShoebox(ClapTrap &clap);
	void ninjaShoebox(FragTrap &frag);
	void ninjaShoebox(ScavTrap &scav);
	void ninjaShoebox(NinjaTrap &ninja);
};

#endif
