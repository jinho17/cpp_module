/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:43:17 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 13:58:32 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	virtual ~Peon();
	Peon(Peon const &copy);
	Peon &operator=(Peon const &copy);

	void getPolymorphed() const;
};

#endif
