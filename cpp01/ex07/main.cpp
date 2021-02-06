/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:15:48 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/06 21:27:38 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "replace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Invalid input!" << std::endl;
		return (0);
	}
	try
	{
		Replace::replace(argv[1], argv[2], argv[3]);
	}
	catch(char const *e)
	{
		std::cerr << e << std::endl;
	}
}
