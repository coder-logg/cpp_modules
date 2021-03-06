#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const ScavTrap &other);
	explicit ScavTrap(const std::string &name);
	void attack(const std::string &target);
	void guardGate();
	ScavTrap();
	~ScavTrap();
};

#endif
