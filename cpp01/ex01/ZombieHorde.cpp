#include "ZombieHorde.hpp"
#include <stdlib.h>
#include <sstream>

Zombie *ZombieHorde::zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return horde;
}

ZombieHorde::ZombieHorde()
{}

ZombieHorde::~ZombieHorde()
{}
