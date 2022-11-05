/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:58:46 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 16:47:06 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		static const int	_maxMateria = 4;
		AMateria			*_list[_maxMateria];
		int					_materiasLearned;
	
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &toCopy);
		~MateriaSource();

		MateriaSource& operator=(MateriaSource const &toCopy);

		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const &type);
		
};

#endif
