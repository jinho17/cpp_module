/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:05:34 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/20 22:57:48 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>

class Fixed
{
private:
	int fpValue;
	static const int fracBit = 8;

public:
	Fixed();
	Fixed(int const fpValue);
	Fixed(float const fpValue);
	virtual ~Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &ref);

	int getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &ref);

#endif
