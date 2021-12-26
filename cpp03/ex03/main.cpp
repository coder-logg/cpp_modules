#include <iostream>
#include <limits>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	trap1("Milk");

	trap1.whoAmI();
	trap1.attack("Hot chocolate");
	return 0;
}