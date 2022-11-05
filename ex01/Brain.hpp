/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:56:53 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 12:16:11 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
		
	public:
		Brain();
		Brain(Brain const &toCopy);
		~Brain();

		Brain& operator=(Brain const &toCopy);

		const std::string& getIdea(int i) const;
		void setIdea(std::string idea, int i);
};

#endif
