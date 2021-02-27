/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 18:00:04 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/27 22:56:24 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int sourceN;
	AMateria *source[4];

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &ref);

	void learnMateria(AMateria *amat);
	AMateria* createMateria(std::string const &type);
};

#endif
