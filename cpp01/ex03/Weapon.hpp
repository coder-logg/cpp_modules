#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(const Weapon & weapon);
	explicit Weapon(const std::string &type);
	const std::string &getType() const;
	void setType(const std::string &type);
};


#endif //WEAPON_HPP
