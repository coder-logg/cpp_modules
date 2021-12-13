#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
public:
	~ZombieHorde();
	ZombieHorde();
	Zombie* zombieHorde( int N, std::string name );
};


#endif //ZOMBIEHORDE_HPP
