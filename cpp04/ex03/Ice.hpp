#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
private:
	unsigned _stability;

public:
	Ice();
	~Ice();
	Ice(Ice const &type);

	Ice &operator =(Ice const &ice);
	virtual AMateria *clone() const;
	void use(ICharacter& target);

};


#endif //ICE_HPP
