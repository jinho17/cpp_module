/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:09:07 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/05 00:45:07 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Convert
{
private:
	Convert();
	std::string str;
	std::string type;
	int	str_int;
	float str_float;
	double str_double;
	bool int_imposs;

public:
	Convert(std::string str);
	virtual ~Convert();
	Convert(Convert const &copy);
	Convert &operator=(Convert const &ref);

	void setType();
	std::string toChar();
	std::string toInt();
	void toFloat();
	void toDouble();

	bool findPoint();
};

#endif
