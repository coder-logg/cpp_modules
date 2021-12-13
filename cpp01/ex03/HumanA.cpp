#include "HumanA.hpp"
#include <iostream>

void HumanA::attack()
{
	std::cout << name + " attacks with his " + weapon->getType() << std::endl;
}

HumanA::HumanA(const std::string & name, Weapon & weapon): weapon(&weapon), name(name){}

HumanA::HumanA()
{}

HumanA::~HumanA()
{}
