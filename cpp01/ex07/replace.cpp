/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:52:19 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/20 20:24:32 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string Replace::replace_str(std::string str, std::string s1, std::string s2)
{
	std::string rtn = str;
	std::string::size_type start = 0;
	std::string::size_type end = 0;

	while ((start = rtn.find(s1, end)) != std::string::npos)
	{
		rtn.replace(rtn.begin() + start, rtn.begin() + start + s1.size(), s2);
		end = start + s2.size();
	}
	return (rtn);
}

void Replace::replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream read_file;
	std::ofstream write_file;

	read_file.open(filename);
	if (!read_file.is_open())
		throw "Invalid filename!";
	write_file.open(filename + ".replace", std::ios::trunc);
	if (!write_file.is_open())
	{
		read_file.close();
		throw "Output file error!";
	}

	while(!read_file.eof())
	{
		std::string str;
		std::getline(read_file, str);
		if (str.find(s1) != std::string::npos)
			str = replace_str(str, s1, s2);
		write_file << str << '\n';
	}
	read_file.close();
	write_file.close();
}
