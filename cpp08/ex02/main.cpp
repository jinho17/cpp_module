/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:43:55 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/07 01:48:37 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main()
{
	std::cout << "---stack---" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "\n---list---" << std::endl;
	std::list<int>	list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "BACK : " << list.back() << std::endl;
	list.pop_back();
	std::cout << "Size : " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator itlist = list.begin();
	std::list<int>::iterator itliste = list.end();
	++itlist;
	--itlist;
	while(itlist != itliste)
	{
		std::cout << *itlist << std::endl;
		++itlist;
	}
	std::list<int> s2(list);


	std::cout << "\n---reverse stack---" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	while(rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}


	std::cout << "\n---reverse list---" << std::endl;

	std::list<int>::reverse_iterator ritlist = list.rbegin();
	std::list<int>::reverse_iterator ritliste = list.rend();
	++ritlist;
	--ritlist;
	while(ritlist != ritliste)
	{
		std::cout << *ritlist << std::endl;
		++ritlist;
	}

	return 0;
}
