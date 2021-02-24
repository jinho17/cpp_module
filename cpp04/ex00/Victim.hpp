/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:42:11 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 13:57:31 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
protected:
	Victim();
	std::string name;

public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(Victim const &copy);
	Victim &operator=(Victim const &copy);

	std::string getName();
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim &ref);

#endif
