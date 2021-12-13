#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
public:
	void	announce();
	Zombie();
	explicit	Zombie(const std::string & name);
	void	setName(const std::string & name);
	~Zombie();

private:
	std::string name;
};

#endif //ZOMBIE_HPP
