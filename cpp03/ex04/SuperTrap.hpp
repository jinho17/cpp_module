/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:04:09 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 03:30:46 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
private:
	SuperTrap();

public:
	SuperTrap(std::string name);
	virtual ~SuperTrap();
	SuperTrap(SuperTrap const &copy);
	SuperTrap &operator=(SuperTrap const &ref);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};

#endif
