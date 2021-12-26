#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
protected:
	std::string name, className;
	int hitpoints, energyPoints, attackDamage;
	void setAllFields(std::string name, int hitpoints, int energyPoints, int attackDamage);

public:
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	explicit ClapTrap(const std::string &name);
	ClapTrap();
	~ClapTrap();

	std::string getName() const;
	int			getHitpoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;

	virtual void attack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

};

#endif
