/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:47:55 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/27 23:40:40 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): units(nullptr)
{
    N = 0;
}

Squad::~Squad()
{
    if (units)
    {
        for(int i = 0; i < N; i++)
            delete units[i];
        delete units;
    }
}

Squad::Squad(Squad const &copy)
{
    N = 0;
    for (int i = 0; i < copy.getCount(); i++)
        push(copy.getUnit(i)->clone());
}

Squad &Squad::operator=(Squad const &ref)
{
    N = 0;
    if (units)
    {
        for(int i = 0; i < ref.getCount(); i++)
            delete units[i];
        delete units;
        units = nullptr;
    }
    for(int i = 0; i < N; i++)
        push(ref.getUnit(i)->clone());
    return (*this);
}

int Squad::getCount() const
{
    return (N);
}

ISpaceMarine* Squad::getUnit(int N) const
{
    if (this->N == 0 || N < 0 || N >= this->N)
        return (nullptr);
    return (units[N]);
}

int Squad::push(ISpaceMarine *unit)
{
    if (!unit)
        return (N);
    if (units)
    {
        for(int i = 0; i < N; i++)
        {
            if (units[i] == unit)
                return (N);
        }
        ISpaceMarine **cpy = new ISpaceMarine*[N+1];
        for(int i = 0; i < N; i++)
            cpy[i] = units[i];
        delete[] units;
        units = cpy;
        units[N] = unit;
        N++;
    }
    else
    {
        units = new ISpaceMarine*[1];
        units[0] = unit;
        N = 1;
    }
    return (N);
}
