/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 01:27:27 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/05 03:19:43 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	void *data= serialize();
	Data *rtn = deserialize(data);

	std::cout << "deserialize s1 : [" << rtn->s1 << "], n : " << rtn->n << ", s2 : [" << rtn->s2 << "]" << std::endl;
	delete reinterpret_cast<Data *>(data);
	delete rtn;
}
