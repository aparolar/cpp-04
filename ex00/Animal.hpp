/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:44:10 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/26 16:57:41 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include  <iostream>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal();
		virtual ~Animal();

		const std::string &getType() const;
		virtual void makeSound() const;
};

#endif