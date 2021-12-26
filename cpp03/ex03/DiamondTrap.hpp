#ifndef DIMONDTRAP_HPP
#define DIMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string		name;
	void init(std::string const &name);

public:
	DiamondTrap();
	explicit DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator = (DiamondTrap const &value);
	~DiamondTrap();
	void attack(const std::string &target);
	void whoAmI ( void );
};

#endif
