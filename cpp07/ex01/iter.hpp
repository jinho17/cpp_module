/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 02:20:01 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/10 14:27:07 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template<typename T>
void iter(T *arr, int len, void(*f)(T const &element))
{
	for (int i = 0; i < len; i++)
		(*f)(arr[i]);
}

template<typename T>
void show(T const &element)
{
	std::cout << element << " ";
}

#endif
