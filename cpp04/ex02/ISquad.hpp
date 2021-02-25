/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:58:12 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/25 12:16:51 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad() {};
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int N) const = 0;
    virtual int push(ISpaceMarine *unit) = 0;
};

#endif