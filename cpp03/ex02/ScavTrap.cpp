#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	className = "ScavTrap";
	setAllFields("Noname", 100, 50, 20);
	std::cout  << className << " " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	className = "ScavTrap";
	std::cout  << className << " " << name << " created" << std::endl;
	setAllFields(name, 100, 50, 20);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructor called." <<  std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << name << " attack " << target << " causing "
			  << attackDamage << " point of damage!" << std::endl;
	energyPoints -= attackDamage;
}
