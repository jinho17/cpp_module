/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:00:35 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/04 15:15:15 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony stack("Stack Pony");

	stack.crying();
	stack.eating();
	stack.sleeping();
}

void ponyOnTheHeap(void)
{
	Pony *heap = new Pony("Heap Pony");

	heap->crying();
	heap->eating();
	heap->sleeping();
	delete heap;
}

int main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
}
