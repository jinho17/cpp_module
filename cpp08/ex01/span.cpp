/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:04:11 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/10 17:37:05 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N): N(N)
{
}

Span::~Span()
{
}

Span::Span(Span const &copy):
	N(copy.N), numbers(copy.numbers)
{
}

Span &Span::operator=(Span const &ref)
{
	if (this != &ref)
	{
		N = ref.N;
		numbers = ref.numbers;
	}
	return *this;
}

const char *Span::FullNumbersException::what() const throw()
{
	return "Exception : Full Numbers";
}

const char *Span::LackNumbersException::what() const throw()
{
	return "Exception : Lack numbers";
}

const char *Span::SpanRangeException::what() const throw()
{
	return "Exception : Invalid span range";
}

void Span::addNumber(int value)
{
	if ((unsigned int)numbers.size() >= N)
		throw Span::FullNumbersException();
	numbers.push_back(value);
}

long Span::shortestSpan()
{
	if (numbers.size() <= 1)
		throw Span::LackNumbersException();

	long diff = std::abs((long)numbers[1] - (long)numbers[0]);
	for(int i = 0; i < (int)numbers.size(); i++)
	{
		for(int j = i + 1; j < (int)numbers.size(); j++)
			if (std::abs((long)numbers[j] - (long)numbers[i]) < diff)
				diff = std::abs((long)numbers[j] - (long)numbers[i]);
	}
	return (diff);
}

long Span::longestSpan()
{
	if (numbers.size() <= 1)
		throw Span::LackNumbersException();

	std::vector<int>::iterator min = std::min_element(numbers.begin(), numbers.end());
	std::vector<int>::iterator max = std::max_element(numbers.begin(), numbers.end());
	return (std::abs((long)*max - (long)*min));
}
