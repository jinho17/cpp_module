/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 02:44:44 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/10 16:40:23 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	unsigned int n;
	T *arr;

public:
	Array()
	{
		n = 0;
		arr = new T[0]();
	}

	Array(unsigned int n)
	{
		this->n = n;
		arr = new T[n]();
	}

	~Array()
	{
		delete[] arr;
	}

	Array(Array const &copy)
	{
		n = copy.n;
		arr = new T[n]();
		for(unsigned int i = 0; i < n; i++)
			arr[i] = copy.arr[i];
	}

	Array &operator=(Array const &ref)
	{
		if (this != &ref)
		{
			delete[] arr;
			n = ref.n;
			arr = new T[n]();
			for(unsigned int i = 0; i < n; i++)
				arr[i] = ref.arr[i];
		}
		return (*this);
	}

	class OutOfLimitsException: public std::exception
	{
		virtual const char *what() const throw()
		{
			return "This element is out of the limits";
		}
	};

	T &operator[](unsigned int idx)
	{
		if (idx >= n)
			throw OutOfLimitsException();
		return (arr[idx]);
	}

	T const &operator[](unsigned int idx) const
	{
		if (idx >= n)
			throw OutOfLimitsException();
		return (arr[idx]);
	}

	unsigned int size() const
	{
		return (n);
	}
};

#endif
