#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	className = "FragTrap";
	setAllFields("Nameless", 100, 100, 30);
	std::cout  << name << " " << className << " created." << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
	className = "FragTrap";
	setAllFields(name, 100, 100, 30);
	std::cout  << className << " " << name << " created" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << name << " Combo!!!:" << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cout << "   BOOOOOOOOOOOOOOM!!!!!" << std::endl;
	}
	std::cout << "Causing 500 point of damage!!!!" << std::endl;
	this->energyPoints -= 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor called." <<  std::endl;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << name << " attack " << target << " causing "
			  << attackDamage << " point of damage!" << std::endl;
	energyPoints -= attackDamage;
}
