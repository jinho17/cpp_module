/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 00:32:23 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 00:48:19 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Identify.hpp"

Base *generate(void)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 2);

	int base = dis(gen);
	char generate[3] = {'A', 'B', 'C'};
	std::cout << "generate : " << generate[base] << std::endl;
	Base *rtn;
	if (base == 0)
		rtn = new A;
	else if (base == 1)
		rtn = new B;
	else
		rtn = new C;
	return (rtn);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(&p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(&p) != nullptr)
		std::cout << "C";
}
