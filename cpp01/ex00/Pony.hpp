/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:00:56 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/04 15:07:17 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
	std::string name;

public:
	Pony(std::string name);
	virtual ~Pony();

	void crying(void);
	void eating(void);
	void sleeping(void);
};

#endif
