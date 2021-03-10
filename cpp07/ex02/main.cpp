/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 01:03:03 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/10 15:08:41 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	Array<int> a;
	Array<int> b(3);
	std::cout << "a size : " << a.size();
	std::cout << ", b size : " << b.size() << std::endl;
	a = b;
	std::cout << "a size : " << a.size();
	std::cout << ", b size : " << b.size() << std::endl;
	for(int i = 0; i < (int)a.size(); i++)
	{
		std::cout << "a[" << i << "]:" << a[i] << " | ";
	}
	std::cout << std::endl;
	for(int i = 0; i < (int)a.size(); i++)
	{
		a[i] = i;
		std::cout << "a[" << i << "]:" << a[i] << " | ";
	}
	std::cout << std::endl;
	Array<int> c(a);
	for(int i = 0; i < (int)c.size(); i++)
	{
		std::cout << "c[" << i << "]:" << c[i] << " | ";
	}

	std::cout << "\n-------------" << std::endl;
	Array<float> f(10);
	for(int i = 0; i < (int)f.size(); i++)
	{
		f[i] = i * 0.1f;
		std::cout << "f[" << i << "]:" << f[i] << " | ";
	}

	std::cout << "\n-------------" << std::endl;
	Array<std::string> str(5);
	for(int i = 0; i < (int)str.size(); i++)
	{
		str[i] = "\'" + std::to_string(i) + "\'";
		std::cout << "str[" << i << "]:" << str[i] << " | ";
	}

	std::cout << "\n-------------" << std::endl;
	Array<double> error_test(1);
	try {error_test[10] = 3;}
	catch (std::exception &e) {std::cerr << e.what() << std::endl;}
}
