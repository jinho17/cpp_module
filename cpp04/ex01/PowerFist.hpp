/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:42:48 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 17:00:26 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(PowerFist const &copy);
	PowerFist &operator=(PowerFist const &ref);

	void attack(void) const;
};

#endif
