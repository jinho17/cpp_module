/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:45:19 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 16:59:48 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator=(SuperMutant const &ref);

	void takeDamage(int damage);
};

#endif
