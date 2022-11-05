/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:06:28 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 16:47:01 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < _maxMateria; i++)
		_list[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
	*this = toCopy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _maxMateria; i++)
	{
		if (this->_list[i])
			delete this->_list[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const &toCopy)
{
	this->_materiasLearned = toCopy._materiasLearned;
	for (int i = 0; i < _maxMateria; i++)
		*(this->_list[i]) = *(toCopy._list[i]);
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_materiasLearned == 4)
	{
		return ;
	}
	for (int i = 0; i < _maxMateria; i++)
	{
		if (this->_list[i] == nullptr)
		{
			this->_list[i] = materia;
			_materiasLearned++;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _maxMateria; i++)
	{
		if (this->_list[i] && this->_list[i]->getType() == type)
			return (this->_list[i]->clone());
	}
	return (NULL);	
}
