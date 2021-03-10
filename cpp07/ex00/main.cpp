/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 01:03:03 by jinkim            #+#    #+#             */
/*   Updated: 2021/03/10 17:04:39 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

	int const &getN() const
	{
	    return this->_n;
	}
private:
	int _n;
};

int main()
{
	Awesome a(2);
	Awesome b(3);

	//int a = 2;
	//int b = 3;
	::swap( a, b );
	std::cout << "a = " << a.getN() << ", b = " << b.getN()  << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ).getN()  << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ).getN()  << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n--------------" << std::endl;
	std::string e = "chaine3";
	std::string f = "chaine3";

	std::cout << "e = " << e << " (" << &e << "), f = " << f << " (" << &f << ")" << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << " (" << &e << "), f = " << f << " (" << &f << ")" << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << " (" << &::min(e, f) << ")" << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << " (" << &::max(e, f) << ")" << std::endl;

	return 0;
}
