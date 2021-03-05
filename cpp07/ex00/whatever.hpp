/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 01:02:34 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 02:15:50 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
