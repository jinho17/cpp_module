/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:52:36 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/25 14:57:58 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice();
    virtual ~Ice();
    Ice(Ice const &copy);
    Ice &operator=(Ice const &ref);

    Ice *clone() const;
    void use(ICharacter& target);
};

#endif