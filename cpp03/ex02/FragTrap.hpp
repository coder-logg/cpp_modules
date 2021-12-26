#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const FragTrap &other);
	explicit FragTrap(const std::string &name);
	void highFivesGuys();
	void attack(const std::string &target);
	~FragTrap();
	FragTrap();
};


#endif //FRAGTRAP_HPP
