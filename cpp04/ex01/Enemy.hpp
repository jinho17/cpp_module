/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:44:08 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 16:55:49 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
protected:
	Enemy();
	int hp;
	std::string type;

public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy(Enemy const &copy);
	Enemy &operator=(Enemy const &ref);

	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif
