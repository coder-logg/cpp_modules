#include "DiamondTrap.hpp"
#include <iostream>

void DiamondTrap::init(std::string const &name)
{
	className = "DiamondTrap";
	this->name = name;
	setAllFields(name + "_clap_name", 100, 50, 30);
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	className = "DiamondTrap";
	init(name);
	std::cout  << className << " " << this->name << " created." << std::endl;
}

DiamondTrap::DiamondTrap()
{
	init("Noname");
	std::cout  << "Nameless " << className << " " << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name << ". ClapTrap name is "<< ClapTrap::name + "." << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	std::cout << "DiamondTrap " << name << " attack " << target << " causing "
			  << ScavTrap::attackDamage << " point of damage!" << std::endl;
	energyPoints -= attackDamage;
}

