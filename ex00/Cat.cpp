/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:04:53 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 12:01:10 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat contructor base called" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = toCopy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor base called" << std::endl;
}

Cat& Cat::operator=(Cat const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes miau miau" << std::endl;
}
