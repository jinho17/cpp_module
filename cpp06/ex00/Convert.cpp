/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:07:59 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/05 01:07:40 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string str): str(str), type("")
{
	setType();
	std::cout << "char: " << toChar() << std::endl;
	std::cout << "int: " << toInt() << std::endl;
	toFloat();
	toDouble();
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &copy): str(copy.str), type("")
{
	setType();
	std::cout << "char: " << toChar() << std::endl;
	std::cout << "int: " << toInt() << std::endl;
	toFloat();
	toDouble();
}

Convert &Convert::operator=(Convert const &ref)
{
	str = ref.str;
	type = "";
	setType();
	std::cout << "char: " << toChar() << std::endl;
	std::cout << "int: " << toInt() << std::endl;
	toFloat();
	toDouble();
	return (*this);
}

void Convert::setType()
{
	if (str.length() == 1 && !std::isdigit(str[0]))
	{
		type = "char";
		return ;
	}
	int_imposs = false;
	try {str_int = std::stoi(str); type = "num";}
	catch(std::exception &e) {int_imposs = true;}
	try {str_float = std::stof(str); type = "num";}
	catch(std::exception &e) {}
	try {str_double = std::stod(str); type = "num";}
	catch(std::exception &e) {}
	if (type == "num")
	{
		for(int i = 0; i < (int)str.length(); i++)
		{
			if (str != "-inff" && str != "+inff" && str != "inff" && str != "nanf" &&
				str != "-inf" && str != "+inf" && str != "inf" && str != "nan" &&
				!std::isdigit(str[i]) &&
				str[i] != '.' && str[i] != 'e' && str[i] != 'f' && str[i] != '+' && str[i] != '-')
				type = "";
		}
	}
}

std::string Convert::toChar()
{
	if (type == "char")
		return ('\'' + str + '\'');
	else if (type == "num")
	{
		if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf" ||
			str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
			return ("impossible");
		else if (int_imposs == true)
			return ("impossible");
		if (str_int < 0 || str_int > 127)
			return ("impossible");
		else if ((str_int >= 0 && str_int < 31) || str_int == 127)
			return ("Non displayable");
		else if (str_int >= 32)
		{
			char c[2];
			c[0] = static_cast<char>(str_int);
			c[1] = '\0';
			return ('\'' + std::string(c) + '\'');
		}
	}
	return ("impossible");
}

std::string Convert::toInt()
{
	if (type == "char")
	{
		str_int = static_cast<int>(str[0]);
		return (std::to_string(str_int));
	}
	else if (type == "num")
	{
		if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf" ||
			str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
			return ("impossible");
		else if (int_imposs == true)
			return ("impossible");
		return (std::to_string(str_int));
	}
	return ("impossible");
}

void Convert::toFloat()
{
	if (type == "char")
	{
		str_int = static_cast<int>(str[0]);
		str_float = static_cast<float>(str[0]);
		if (str_float == str_int)
			std::cout << "float: " << str_float << ".0f" << std::endl;
		else
			std::cout << "float: " << str_float << "f" << std::endl;
		return ;
	}
	else if (type == "num")
	{
		if (str_float == 0)
			std::cout << "float: 0.0f" << std::endl;
		else if (!findPoint())
			std::cout << "float: " << str_float << ".0f" << std::endl;
		else
			std::cout << "float: " << str_float << "f" << std::endl;
		return ;
	}
	else
		std::cout << "float: impossible" << std::endl;
}

void Convert::toDouble()
{
	if (type == "char")
	{
		str_int = static_cast<int>(str[0]);
		str_double = static_cast<double>(str[0]);
		if (str_double == str_int)
			std::cout << "double: " << str_double << ".0" << std::endl;
		else
			std::cout << "double: " << str_double << std::endl;
		return ;
	}
	else if (type == "num")
	{
		if (str_double == 0)
			std::cout << "double: 0.0" << std::endl;
		else if (!findPoint())
			std::cout << "double: " << str_double << ".0" << std::endl;
		else
			std::cout << "double: " << str_double << std::endl;
		return ;
	}
	else
		std::cout << "double: impossible" << std::endl;
}

bool Convert::findPoint()
{
	bool point = false;

	int i;
	if (str != "-inff" && str != "+inff" && str != "inff" && str != "nanf" &&
		str != "-inf" && str != "+inf" && str != "inf" && str != "nan" &&
		str_int < 1000000 && str_int > -1000000 && !int_imposs)
	{
		for(i = 0; i < (int)str.length(); i++)
		{
			if (point == true && str[i] != '0' && str[i] != 'f')
				return (true);
			if (str[i] == '.')
				point = true;
		}
		return (false);
	}
	return (true);
}
