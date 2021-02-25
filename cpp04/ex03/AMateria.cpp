/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:02:50 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/25 14:52:00 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(std::string const &type):
    _xp(0), type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &copy)
{
    _xp = copy._xp;
    type = copy.type;
}

AMateria &AMateria::operator=(AMateria const &ref)
{
    _xp = ref._xp;
    type = ref.type;
    return (*this);
}

std::string const &getType() const
{
    return (*type);
}

unsigned int getXP() const
{
    return (_xp);
}

void use(ICharacter& target)
{
    (void)target
    _xp += 10;
}