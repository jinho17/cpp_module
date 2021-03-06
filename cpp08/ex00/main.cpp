/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:29:41 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 19:02:42 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main()
{
	std::vector<int> vec(5, 5);
	std::vector<int>::iterator found;

	try{found = easyfind(vec, 2);}
	catch(std::exception &e){std::cout << e.what() << std::endl;}

	for(int i = 0; i < 5; i++)
		vec[i] = i;
	found = easyfind(vec, 2);
	std::cout << "found value : " << *found << std::endl;

	try{found = easyfind(vec, 5);}
	catch(std::exception &e){std::cout << e.what() << std::endl;}


	std::cout << "\n-------------" << std::endl;
	std::deque<char> deq(3, 'a');
	std::deque<char>::iterator d_found;

	d_found = easyfind(deq, 'a');
	std::cout << "found value : " << *d_found << std::endl;

	try{d_found = easyfind(deq, 'A');}
	catch(std::exception &e){std::cout << e.what() << std::endl;}


	std::cout << "\n-------------" << std::endl;
	std::list<int> lst(10, 9);
	std::list<int>::iterator l_found;

	l_found = easyfind(lst, 9);
	std::cout << "found value : " << *l_found << std::endl;

	try{l_found = easyfind(lst, 10);}
	catch(std::exception &e){std::cout << e.what() << std::endl;}
}
