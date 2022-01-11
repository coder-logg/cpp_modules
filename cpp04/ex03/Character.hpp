#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#define INVENTORY_SIZE 4


class Character : public ICharacter
{
protected:
	std::string _name;
	AMateria	*inventory[INVENTORY_SIZE];

public:
	~Character();
	Character(std::string name);
	Character(const Character &other);
	Character &operator =(const Character &other);
	std::string const &getName() const;
	void equip(AMateria* mat);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //CHARACTER_HPP
