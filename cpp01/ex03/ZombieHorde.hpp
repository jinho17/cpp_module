/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 02:12:45 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/05 03:04:43 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <random>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string type;
	int N;
	Zombie *zombies;

public:
	ZombieHorde(std::string type, int N);
	virtual ~ZombieHorde();

	void announce(void);
};

#endif
