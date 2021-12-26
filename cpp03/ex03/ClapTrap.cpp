#include "ClapTrap.hpp"
#include <iostream>

void ClapTrap::setAllFields(std::string name, int hitpoints, int energyPoints, int attackDamage)
{
	this->name = name;
	this->hitpoints = hitpoints;
	this->energyPoints = energyPoints;
	this->attackDamage = attackDamage;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), className("ClapTrap"), hitpoints(10),
energyPoints(10), attackDamage(0)
{
	std::cout << className << " " << name << " created." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << className << " " << name << " attack " << target << " causing "
	<< attackDamage << " point of damage!" << std::endl;
	energyPoints -= attackDamage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > 0)
	{
		std::cout << className << " " << name << " take " << amount << " point of damage." << std::endl;
		hitpoints -= amount;
		if (hitpoints <= 0)
			std::cout << className << " " << name << " dead!" << std::endl;
	}
	else
	{
		std::cout << "Try to take damage failed! ";
		std::cout << className << " " << name << " already dead!" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints > 0)
	{
		std::cout  << className << " " << name << " repaired by " << amount
			<< " health points." << std::endl;
		hitpoints += amount;
	}
	else
	{
		std::cout << "Try to repair hitpoints failed! ";
		std::cout << className << " " << name << " already dead!" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructor called." <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << className << " copying: " << name << " to " << other.name << std::endl;
	setAllFields(other.name, other.hitpoints, other.energyPoints, other.attackDamage);
}

ClapTrap::ClapTrap() : name("Noname"), className("ClapTrap"), hitpoints(10),
energyPoints(10), attackDamage(0)
{
	std::cout << "Nameless " << className << " created." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << className << " assignation: " << name << " to " << other.name << std::endl;
	setAllFields(other.name, other.hitpoints, other.energyPoints, other.attackDamage);
	return *this;
}

std::string ClapTrap::getName() const
{
	return (name);
}

int		ClapTrap::getHitpoints() const
{
	return (hitpoints);
}

int		ClapTrap::getEnergyPoints() const
{
	return (energyPoints);
}

int		ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}
