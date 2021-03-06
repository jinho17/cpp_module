/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:04:24 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/06 23:30:52 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
	Span();
	unsigned int N;
	std::vector<int> numbers;

public:
	Span(unsigned int N);
	virtual ~Span();
	Span(Span const &copy);
	Span &operator=(Span const &ref);

	class FullNumbersException: public std::exception{
		virtual const char *what() const throw();
	};

	class LackNumbersException: public std::exception{
		virtual const char *what() const throw();
	};

	class SpanRangeException: public std::exception{
		virtual const char *what() const throw();
	};

	void addNumber(int value);
	long shortestSpan();
	long longestSpan();

	template <typename Iterator>
    void addNumber(Iterator begin, Iterator end)
    {
        if (end - begin > N)
            throw Span::SpanRangeException();
        std::copy(begin, end, std::back_inserter(numbers));
    }
};

#endif
