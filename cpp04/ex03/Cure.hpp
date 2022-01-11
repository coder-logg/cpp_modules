#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
private:
	unsigned _hpRestored;

public:
	Cure();
	~Cure();
	Cure(Cure const &type);
	Cure &operator =(Cure const &ice);
	virtual AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CURE_HPP
