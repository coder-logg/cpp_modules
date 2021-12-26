#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(const ScavTrap &other);
	explicit ScavTrap(const std::string &name);
	void guardGate();
	void attack(const std::string &target);
	~ScavTrap();
	ScavTrap();
};

#endif
