#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : name(name), hitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << name <<" ClapTrap created" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << name << " attack " << target << " causing "
	<< attackDamage << " point of damage!" << std::endl;
	std::cout << "Energy wasted " << attackDamage << " points" << std::endl;
	energyPoints -= attackDamage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " take " << amount << " point of damage!" << std::endl;
	this->hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " repaired by " << amount << " health points." << std::endl;;
	this->hitpoints += amount;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed." <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copying: " << name << " to " << other.name << std::endl;

	name = other.name;
	hitpoints = other.hitpoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

ClapTrap::ClapTrap() : name("Nameless"), hitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Nameless ClapTrap created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignation: " << name << " to " << other.name << std::endl;

	name = other.name;
	hitpoints = other.hitpoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}
