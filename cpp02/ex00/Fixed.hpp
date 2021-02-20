/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 02:33:34 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/07 22:58:11 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int fpValue;
	static const int fracBit = 8;

public:
	Fixed();
	virtual ~Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &ref);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
