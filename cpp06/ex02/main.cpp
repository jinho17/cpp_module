/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 00:27:17 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 00:58:01 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
	for(int i = 0; i < 10; i++)
	{
		Base *test = generate();

		std::cout << "pointer : ";
		identify_from_pointer(test);
		std::cout << std::endl;

		std::cout << "reference : ";
		identify_from_reference(*test);
		std::cout << "\n" << std::endl;

		delete test;
	}

}
