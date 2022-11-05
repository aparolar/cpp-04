/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:04:53 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 13:37:19 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat contructor base called" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = toCopy;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor base called" << std::endl;
}

Cat& Cat::operator=(Cat const &toCopy)
{
	this->_type = toCopy.getType();
	*(this->_brain) = *(toCopy.getBrain());
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes miau miau" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->_brain;
}
