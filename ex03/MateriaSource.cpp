/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:06:28 by aparolar          #+#    #+#             */
/*   Updated: 2022/08/01 10:58:05 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < _maxMateria; i++)
		_list[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _maxMateria; i++)
	{
		if (this->_list[i])
			delete this->_list[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (_materiasLearned == 4)
	{
		std::cout << "Can't learn more materias!" << std::endl;
		return ;
	}
	for (int i = 0; i < _maxMateria; i++)
	{
		if (this->_list[i] == nullptr)
		{
			this->_list[i] = materia;
			_materiasLearned++;
			std::cout << "Materia " << materia->getType() << " learned!" << std::endl;
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