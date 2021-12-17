#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
public:
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	explicit ScavTrap(const std::string &name);
	ScavTrap();
	~ScavTrap();
};


#endif //SCAVTRAP_HPP
