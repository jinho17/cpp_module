/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:47:46 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 16:57:07 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
private:
	Character();
	std::string name;
	int ap;
	AWeapon *weapon;

public:
	Character(std::string const &name);
	virtual ~Character();
	Character(Character const &copy);
	Character &operator=(Character const &ref);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const getName() const;
	int getAp() const;
	AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, Character &chara);

#endif
