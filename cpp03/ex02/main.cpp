#include <iostream>
#include <limits>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	clapTrap("Bals Trap");
	FragTrap	flagTrap("Komar Ftrap");
	ScavTrap	scavTrap;

	clapTrap.attack("Hole");
	scavTrap.attack("Circle");
	flagTrap.attack(clapTrap.getName());

	clapTrap = FragTrap("Bubble Ftrap");

	flagTrap.highFivesGuys();
	scavTrap.guardGate();

	clapTrap.takeDamage(5);
	clapTrap.beRepaired(1);

	clapTrap = flagTrap;
	return 0;
}