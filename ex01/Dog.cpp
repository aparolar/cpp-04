/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:58:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/27 16:09:56 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog contructor base called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor base called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes guau guau" << std::endl;
}