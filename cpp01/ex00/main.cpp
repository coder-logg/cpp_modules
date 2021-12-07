#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	zombie1.announce();
	randomChump("Zombie2");
	Zombie *zombie3 = newZombie("Zombie3");
	zombie3->announce();
	delete zombie3;
}