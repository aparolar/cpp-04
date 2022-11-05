/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:00:31 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 15:37:54 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	
}

AMateria::AMateria(AMateria const &toCopy)
{
	*this = toCopy;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	
}

AMateria::~AMateria()
{
	
}

AMateria& AMateria::operator=(AMateria const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria use????" << target.getName() << std::endl;
}
