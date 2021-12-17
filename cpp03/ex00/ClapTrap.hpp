#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int hitpoints, energyPoints, attackDamage;

public:
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	explicit ClapTrap(const std::string &name);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap();
	~ClapTrap();
};

#endif //CLAPTRAP_HPP
