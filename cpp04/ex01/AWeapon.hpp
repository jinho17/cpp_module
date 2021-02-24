/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:38:25 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 16:55:49 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
protected:
	AWeapon();
	std::string name;
	int apcost;
	int damage;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const &copy);
	AWeapon &operator=(AWeapon const &ref);

	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
