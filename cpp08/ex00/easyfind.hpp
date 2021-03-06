/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:24:41 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 18:42:22 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class CannotFoundException:public std::exception
{
	virtual const char *what() const throw()
	{
		return "Cannot Found";
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int data)
{
	typename T::iterator find = std::find(container.begin(), container.end(), data);
	if (find == container.end())
		throw CannotFoundException();
	return (find);
}

#endif
