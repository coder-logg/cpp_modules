#include <string>
#include <iostream>
#include <cstdlib>

class Base
{
	public:
	virtual ~Base(){};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate()
{
	std::srand(std::time(nullptr)  * std::rand() * std::clock());
	int i = std::rand() % 3;
	if (i == 0)
	{
		std::cout << "Create class A : ";
		return new A();
	}
	else if (i == 1)
	{
		std::cout << "Create class B : ";
		return new B();
	}
	else if (i == 2)
	{
		std::cout << "Create class C : ";
		return new C();
	}
	return nullptr;
}


void identify(Base &p)
{
	if ((char*)&p == nullptr)
	{
		std::cout << "?" << std::endl;
		return ;
	}
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...) {}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

typedef struct
{
	int x;
	int y;
	int z;
} Data;

uintptr_t serealize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserealize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	std::cout << "created | identified" << std::endl;
	std::cout << "-----//Pointer//-----" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Base *ex = generate();
		identify(ex);
		delete ex;
	}
	std::cout << "-----//Reference//-----" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Base &ex = *(generate());
		identify(ex);
		delete &ex;
	}

	return (0);
}


