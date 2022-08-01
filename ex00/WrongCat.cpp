/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:34:50 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/27 10:35:16 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat contructor base called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor base called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Cat goes miau miau" << std::endl;
}