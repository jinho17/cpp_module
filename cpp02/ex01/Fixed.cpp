/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:05:23 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/20 23:02:48 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fpValue = 0;
}

Fixed::Fixed(int const fpValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpValue = (fpValue << Fixed::fracBit);
}

Fixed::Fixed(float const fpValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpValue = roundf(fpValue * (1 << Fixed::fracBit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fpValue = ref.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return(this->fpValue);
}

float Fixed::toFloat(void) const
{
	return ((float)this->fpValue / (float)(1 << Fixed::fracBit));
}

int Fixed::toInt(void) const
{
	return (this->fpValue >> Fixed::fracBit);
}

std::ostream &operator<<(std::ostream &out, Fixed const &ref)
{
	out << ref.toFloat();
	return (out);
}
