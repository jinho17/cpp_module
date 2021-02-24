/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:46:36 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 17:00:16 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const &copy);
	RadScorpion &operator=(RadScorpion const &ref);
};

#endif
