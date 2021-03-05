/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 01:32:29 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/05 03:19:51 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void *serialize(void)
{
	Data *raw = new Data;
	std::string alphanum = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, alphanum.length());
	std::uniform_int_distribution<int> num(0, alphanum.length() * 42);

	for(int i = 0; i < 8; i++)
		raw->s1 += alphanum[dis(gen)];
	raw->n = num(gen);
	for(int i = 0; i < 8; i++)
		raw->s2 += alphanum[dis(gen)];
	std::cout << "serialize s1 : [" << raw->s1 << "], n : " << raw->n << ", s2 : [" << raw->s2 << "]" << std::endl;
	return (reinterpret_cast<void*>(raw));
}

Data *deserialize(void *raw)
{
	Data *rtn = new Data;

	rtn->s1 = reinterpret_cast<Data*>(raw)->s1;
	rtn->s2 = reinterpret_cast<Data*>(raw)->s2;
	rtn->n = reinterpret_cast<Data*>(raw)->n;
	return (rtn);
}
