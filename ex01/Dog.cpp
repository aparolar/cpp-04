/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:58:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 13:35:56 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog contructor base called" << std::endl;
}

Dog::Dog(Dog const &toCopy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = toCopy;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor base called" << std::endl;
}

Dog& Dog::operator=(Dog const &toCopy)
{
	this->_type = toCopy.getType();
	*(this->_brain) = *(toCopy.getBrain());
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes guau guau" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->_brain;
}
