/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:39:45 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 13:45:18 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
	Sorcerer();

	std::string name;
	std::string title;

public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	Sorcerer(Sorcerer const &copy);
	Sorcerer &operator=(Sorcerer const &copy);

	std::string getName();
	std::string getTitle();
	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer &ref);

#endif
