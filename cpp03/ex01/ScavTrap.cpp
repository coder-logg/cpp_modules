#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignation: " << name << " to " << other.name << std::endl;

	name = other.name;
	hitpoints = other.hitpoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

ScavTrap::ScavTrap()
{

}

ScavTrap::~ScavTrap()
{


}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{

}
