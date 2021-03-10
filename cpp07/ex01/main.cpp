/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 01:03:03 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/10 14:28:55 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int main()
{
	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
	::iter<int>(arr1, 10, show);
	std::cout << std::endl;
	::iter<const int>(arr1, 10, show);
	std::cout << std::endl;
	::iter(arr1, 10, show);

	std::cout << "\n-------------" << std::endl;
	char arr2[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	::iter(arr2, 7, show);

	std::cout << "\n-------------" << std::endl;
	std::string arr3[5] = {"one", "two", "three", "four", "five"};
	::iter(arr3, 5, show);

	std::cout << "\n-------------" << std::endl;
	float arr4[7] = {1.0f, 1.1f, 1.3f, 2.4f, 2.5f, 3.6f, 1000000};
	::iter(arr4, 7, show);

	std::cout << "\n-------------" << std::endl;
	double arr5[7] = {1.0, 1.1, 1.3, 2.4, 2.5, 3.6, 1000000};
	::iter(arr5, 7, show);

	std::cout << "\n-------------" << std::endl;
	bool arr6[3] = {true, false, true};
	::iter(arr6, 3, show);
}
