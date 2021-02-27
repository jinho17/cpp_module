/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:03:07 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/27 23:36:10 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private:
    AMateria();
protected:
    unsigned int _xp;
    std::string type;

public:
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria(AMateria const &copy);
    AMateria &operator=(AMateria const &ref);

    std::string const &getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
