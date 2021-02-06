/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:52:37 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/06 22:25:01 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Replace
{
private:
	static std::string replace_str(std::string str, std::string s1, std::string s2);
public:
	static void replace(std::string filename, std::string s1, std::string s2);
};

#endif
