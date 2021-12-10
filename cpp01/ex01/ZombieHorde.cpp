#include "ZombieHorde.hpp"
#include <stdlib.h>
#include <sstream>

Zombie *ZombieHorde::zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		std::ostringstream ss;
		ss << i;
		horde[i].setName(name + ss.str());
	}
	return horde;
}
