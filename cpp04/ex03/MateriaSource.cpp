/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinkim <jinkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:59:51 by jinkim            #+#    #+#             */
/*   Updated: 2021/02/27 23:35:10 by jinkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	sourceN = 0;
	for(int i = 0; i < 4; i++)
		source[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < sourceN; i++)
		delete source[i];
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	sourceN = 0;
	for(int i = 0; i < copy.sourceN; i++)
		learnMateria(copy.source[i]->clone());
	for(int i = sourceN; i < 4; i++)
		source[i] = nullptr;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ref)
{
	for(int i = 0; i < sourceN; i++)
		delete source[i];
	sourceN = 0;
	for(int i = 0; i < ref.sourceN; i++)
		learnMateria(ref.source[i]->clone());
	for(int i = sourceN; i < 4; i++)
		source[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *amat)
{
	if (sourceN == 4 || amat == nullptr)
		return;
	for (int i = 0; i < sourceN; i++)
	{
		if (source[i] == amat)
			return ;
	}
	source[sourceN++] = amat;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < sourceN; i++)
	{
		if (source[i]->getType() == type)
			return (source[i]->clone());
	}
	return (nullptr);
}
