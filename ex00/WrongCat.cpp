/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:34:50 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 12:01:35 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat default contructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	std::cout << "WrongCat copy contructor called" << std::endl;
	*this = toCopy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor base called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Cat goes miau miau" << std::endl;
}
