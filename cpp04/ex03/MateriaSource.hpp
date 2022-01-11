#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# define ARR_LEN 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materias[ARR_LEN];
	unsigned ind;
public:
	~MateriaSource();
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);

	void learnMateria(AMateria *other);
	AMateria* createMateria(std::string const &type);

};


#endif //MATERIASOURCE_HPP
