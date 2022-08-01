/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:58:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/26 22:03:49 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog contructor base called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor base called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes guau guau" << std::endl;
}