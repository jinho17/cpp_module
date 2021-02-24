/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:43:52 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/24 14:34:53 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

class Test: public Victim
{
private:
	Test();

public:
	Test(std::string name): Victim(name)
	{
		std::cout << "Test constructor name : " << name << std::endl;
	}
	virtual ~Test()
	{
		std::cout << "Test destructor name : " << name << std::endl;
	}
	Test(Test const &copy): Victim(copy)
	{
		std::cout << "Test constructor name : " << name << std::endl;
	}
	Test &operator=(Test const &ref)
	{
		name = ref.name;
		return (*this);
	}
	void getPolymorphed() const
	{
		std::cout << "Test getPolymorphed name : " << name << std::endl;
	}
};

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	/*
	std::cout << "---------" << std::endl;
	Test test("test");
	test.getPolymorphed();
	std::cout << "---------" << std::endl;
	*/
	return 0;
}
