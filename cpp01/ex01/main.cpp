#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde zhorde;
	int n = 100;
	Zombie *horde = zhorde.zombieHorde(n, "ig");
	for (int i = 0; i < n; ++i)
		horde[i].announce();
}