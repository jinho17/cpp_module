/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 01:32:06 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/05 02:41:46 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <random>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif
