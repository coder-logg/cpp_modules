#include "HumanB.hpp"
#include <iostream>

void HumanB::attack()
{
	std::cout << name + " attacks with his " + weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) : name(name)
{}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(const std::string &name, Weapon &weapon) : weapon(&weapon), name(name)
{}
