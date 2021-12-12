#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
	void attack();
	HumanA(const std::string &name, Weapon &weapon);

private:
	Weapon *weapon;
	std::string name;
};

#endif