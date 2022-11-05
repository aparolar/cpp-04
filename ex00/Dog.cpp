/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:58:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 12:01:00 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog contructor base called" << std::endl;
}

Dog::Dog(Dog const &toCopy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor base called" << std::endl;
}

Dog& Dog::operator=(Dog const &toCopy)
{
	this->_type = toCopy.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes guau guau" << std::endl;
}
