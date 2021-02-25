/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:52:29 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/25 15:00:34 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &copy)
{
    _xp = copy._xp;
    type = copy.type;
}

Ice &Ice::operator=(Ice const &ref)
{
    _xp = ref._xp;
    type = ref.type;
    return (*this);
}

Ice *clone() const
{

}

void use(ICharacter& target)
{
    (void)target
    _xp += 10;
    std::cout << "* shoots an ice bolt at ice *" << std::endl;
}