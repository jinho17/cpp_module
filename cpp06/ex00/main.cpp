/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:03:00 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/04 20:17:56 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid input!" << std::endl;
		return 0;
	}

	Convert conv(argv[1]);
}
