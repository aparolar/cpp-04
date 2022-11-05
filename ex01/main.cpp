/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/05 15:03:59 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define N_ANIMALS 10

int	main(void)
{
	{
		const Animal *lotsOfAnimals[N_ANIMALS];

		for (int i = 0; i < N_ANIMALS; i++)
		{
			if (i < N_ANIMALS / 2)
				lotsOfAnimals[i] = new Dog();
			else
				lotsOfAnimals[i] = new Cat();
		}
		std::cout << "-------------------------------------\n";
		std::cout << lotsOfAnimals[0]->getType() << std::endl;
		std::cout << lotsOfAnimals[5]->getType() << std::endl;
		Brain *brain;
		brain = lotsOfAnimals[0]->getBrain();
		brain->setIdea("I want sarshisitas!", 0);
		brain->setIdea("Let's play bal!!", 1);
		brain->setIdea("Feed me human!", 2);
		std::cout << lotsOfAnimals[0]->getBrain()->getIdea(0) << std::endl;
		std::cout << lotsOfAnimals[0]->getBrain()->getIdea(1) << std::endl;
		std::cout << "-------------------------------------\n";
		for (int i = 0; i < N_ANIMALS; i++)
			delete lotsOfAnimals[i];
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using copy constructor:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog(*dogA);

		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Dog class using assignment operator overload:\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog;

		std::cout << "set idea bluff" << std::endl;
		std::cout << "idea 0 dogA = " << dogA->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogA = " << dogA->getBrain()->getIdea(1) << std::endl;
		std::cout << "idea 0 dogB = " << dogB->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogB = " << dogB->getBrain()->getIdea(1) << std::endl;
		dogB->getBrain()->setIdea("Bluff", 0);
		dogB->getBrain()->setIdea("Bluff2", 1);
		std::cout << "idea 0 dogA = " << dogA->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogA = " << dogA->getBrain()->getIdea(1) << std::endl;
		std::cout << "idea 0 dogB = " << dogB->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogB = " << dogB->getBrain()->getIdea(1) << std::endl;
		*dogA = *dogB;
		std::cout << "idea 0 dogA = " << dogA->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogA = " << dogA->getBrain()->getIdea(1) << std::endl;
		std::cout << "idea 0 dogB = " << dogB->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogB = " << dogB->getBrain()->getIdea(1) << std::endl;
		dogA->getBrain()->setIdea("Bluff00", 0);
		std::cout << "idea 0 dogA = " << dogA->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogA = " << dogA->getBrain()->getIdea(1) << std::endl;
		std::cout << "idea 0 dogB = " << dogB->getBrain()->getIdea(0) << std::endl;
		std::cout << "idea 1 dogB = " << dogB->getBrain()->getIdea(1) << std::endl;
		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Cat class using copy constructor:\n" << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat(*catA);

		delete catA;
		delete catB;
	}
	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy of Cat class using assignment operator overload:\n" << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat;

		*catA = *catB;
		delete catA;
		delete catB;
	}	return (0);
}
