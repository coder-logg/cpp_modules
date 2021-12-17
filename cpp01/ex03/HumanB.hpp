#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
public:
	void attack();
	explicit HumanB(const std::string & name);
	HumanB(const std::string & name, Weapon & weapon);
	void setWeapon(Weapon &weapon);
	~HumanB();

private:
	Weapon *weapon;
	std::string name;
};

#endif
