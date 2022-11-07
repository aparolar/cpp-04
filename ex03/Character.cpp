/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:13:44 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/07 15:12:39 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	for (int i = 0; i < _inventory_size; i++)
		_inventory[i] = nullptr;
}

Character::Character(Character const &toCopy)
{
	for (int i = 0; i < _inventory_size; i++)
		_inventory[i] = nullptr;
	*this = toCopy;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < _inventory_size; i++)
		_inventory[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < _inventory_size; i++)
		delete _inventory[i];
}

Character& Character::operator=(Character const &toCopy)
{
	this->_name = toCopy.getName();
	for (int i = 0; i < _inventory_size; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = nullptr;
		}
		if (toCopy->_inventory[i])
			this->_inventory[i] = toCopy._inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	bool equipped = false;

	for (int i = 0; i < _inventory_size; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			equipped = true;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_inventory[idx])
		{
			std::cout << "Materia " << _inventory[idx]->getType() << " unequipped in inventory " << idx << std::endl;
			this->_inventory[idx] = nullptr;
		}
		else
			std::cout << "Inventory " << idx << " is already empty" << std::endl;
	}
	else
		std::cout << "Wrong index to unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_inventory[idx])
			this->_inventory[idx]->use(target);
		else
		std::cout << "There's no materia equipped in inventory " << idx << std::endl;
	}
	else
		std::cout << "I can only use 4 equipped materias" << std::endl;
}
