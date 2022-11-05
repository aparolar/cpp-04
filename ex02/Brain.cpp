/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:56:45 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 13:48:56 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = toCopy;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain& Brain::operator=(Brain const &toCopy)
{
	for (int i = 0; i < 100; i++)
	{
		this->setIdea(toCopy.getIdea(i), i);
	}
	return *this;
}

const std::string& Brain::getIdea(int i) const
{
	return this->_ideas[i];
}

void Brain::setIdea(std::string idea, int i)
{
	this->_ideas[i] = idea;
}
