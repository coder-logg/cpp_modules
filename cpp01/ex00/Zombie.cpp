#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string & name) : name(name){};
