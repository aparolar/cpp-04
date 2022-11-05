/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:44:10 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 12:35:39 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include  <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal();
		Animal(Animal const &toCopy);
		virtual ~Animal();

		Animal& operator = (Animal const &toCopy);

		const std::string &getType() const;
		virtual void makeSound() const;
		virtual Brain *getBrain() const = 0;
};

#endif
