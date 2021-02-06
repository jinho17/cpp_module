/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:19:38 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/05 03:09:17 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string type;
	std::string name;

public:
	Zombie();
	Zombie(std::string type, std::string name);
	virtual ~Zombie();

	void init(std::string type, std::string name);
	void announce(void);
};

#endif
