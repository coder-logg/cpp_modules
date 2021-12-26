#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal
{
protected:
	std::string _type;
	WrongAnimal(std::string type);

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal & other);
	WrongAnimal &operator=(const WrongAnimal & other);
	virtual void makeSound() const;
	std::string getType() const;
};


#endif //WRONGANIMAL_HPP
