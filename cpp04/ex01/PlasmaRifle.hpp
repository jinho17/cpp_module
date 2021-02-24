/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:40:56 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 17:00:40 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	PlasmaRifle &operator=(PlasmaRifle const &ref);

	void attack(void) const;
};

#endif
