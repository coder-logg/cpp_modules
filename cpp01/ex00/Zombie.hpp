#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
public:
	void	announce();
	explicit Zombie(const std::string & name);

private:
	std::string name;
};

void	randomChump(std::string name);
Zombie	*newZombie(const std::string &name);

#endif //ZOMBIE_HPP
