#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){};
	MutantStack(const MutantStack & clone) : std::stack<T>(clone){};
	MutantStack & operator=(const MutantStack<T> & copy)
	{
		this->c = copy.c;
		return (*this);
	}
	virtual ~MutantStack(){};
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (this->c.begin()); };
	iterator end() { return (this->c.end()); };
};

#endif //PISCINE_MUTANTSTACK_HPP
