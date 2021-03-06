/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:04:48 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 23:33:05 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n---------" << std::endl;
	Span sp2 = Span(10000);
	std::vector<int> range(10000, 5);
	for(int i = 0; i < 10000; i++)
		range[i] = i * 5;
	range[42] = 4242;
	sp2.addNumber(range.begin(), range.end());
	std::cout << "longest : " << sp2.longestSpan() << std::endl;
	std::cout << "shortest : " << sp2.shortestSpan() << std::endl;


	std::cout << "\n---------" << std::endl;
	Span sp3 = Span(42);
	try{sp3.addNumber(range.begin(), range.end());}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}

	try{std::cout << "longest : " << sp3.longestSpan() << std::endl;}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}

	try{std::cout << "shortest : " << sp3.shortestSpan() << std::endl;}
	catch(const std::exception& e){std::cerr << e.what() << std::endl;}
}
