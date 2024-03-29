/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:53:05 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/27 17:43:04 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{
public:
    Cure();
    virtual ~Cure();
    Cure(Cure const &copy);
    Cure &operator=(Cure const &ref);

    AMateria *clone() const;
    void use(ICharacter& target);
};

#endif
