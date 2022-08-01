/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:04:53 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/26 22:05:45 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat contructor base called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor base called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes miau miau" << std::endl;
}