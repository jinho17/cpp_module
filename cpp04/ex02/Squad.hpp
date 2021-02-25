/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:48:26 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/25 12:49:48 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad: public ISquad
{
private:
    int N;
    ISpaceMarine **units;
public:
    Squad();
    virtual ~Squad();
    Squad(Squad const &copy);
    Squad &operator=(Squad const &ref);
    
    int getCount() const;
    ISpaceMarine* getUnit(int N) const;
    int push(ISpaceMarine *unit);
};

#endif