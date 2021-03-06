/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:45:06 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/07 01:35:14 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {}
	virtual ~MutantStack() {}
	MutantStack(MutantStack<T> const &copy): std::stack<T>(copy) {}
	MutantStack<T> &operator=(MutantStack<T> const &ref)
	{
	std::stack<T>::operator=(ref);
	return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() {return (this->c.begin());}
	const_iterator begin() const {return (this->c.begin());}
	iterator end() {return (this->c.end());}
	const_iterator end() const {return (this->c.end());}

	reverse_iterator rbegin() {return (this->c.rbegin());}
	const_reverse_iterator rbegin() const {return (this->c.rbegin());}
	reverse_iterator rend() {return (this->c.rend());}
	const_reverse_iterator rend() const {return (this->c.rend());}
};

#endif
