#include "Character.hpp"
#include <iostream>

std::string const & Character::getName() const { return _name; }

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character " << _name << " is created" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = 0;
}

void Character::equip(AMateria* mat)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = mat;
			std::cout << mat->getType() << " was added to " << _name
						<< "'s inventory in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << _name + " inventory is full" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx < INVENTORY_SIZE && idx >= 0) && inventory[idx])
	{
		std::cout << _name + " use slot [" << idx << "]:";
		inventory[idx]->use(target);
		delete inventory[idx];
		inventory[idx] = 0;
	}
	else
		std::cout << "Using inventory error" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && !inventory[idx])
	{
		std::cout <<  "Character " + _name + " trow "
					<< inventory[idx]->getType() + " from slot " << idx << std::endl;
		inventory[idx] = 0;
	}
}

Character::~Character()
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		if(inventory[i])
			delete inventory[i];
	}
	std::cout << "Was destroyed Character(" + _name + ")" << std::endl;
}
