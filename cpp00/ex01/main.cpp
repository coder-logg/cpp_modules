#include <iostream>
#include <string>
#include "Phonebook.h"
#include <iomanip>
//using namespace std;

void print_table(const Phonebook & ph)
{
	unsigned size = ph.getSize(), n = 0;
	if (size == 0)
		std::cout << "There aren't contacts" << std::endl;
	while ((size/=10) > 0) n++;
	std::cout << "|" << std::setw(n) << "i";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	for (unsigned i = 1; i <= ph.getSize(); i++)
	{
		std::cout << "|" << std::setw(n) << i;
		std::cout << "|" << std::setw(10) << ph.getContact(i).name;
		std::cout << "|" << std::setw(10) << ph.getContact(i).surname;
		std::cout << "|" << std::setw(10) << ph.getContact(i).nickname << "|" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	argc = 0;
	argv = NULL;
	std::string str;
	Phonebook ph;
	while (1)
	{
		std::cin >> str;
		if (str == "EXIT")
			exit(0);
		else if (str == "ADD")
		{
			Contact newContact;
			std::cout << "please enter contact's name" << std::endl;
			std::cin >> newContact.name;
			std::cout << "please enter contact's surname" << std::endl;
			std::cin >> newContact.surname;
			std::cout << "please enter contact's " << std::endl;
			std::cin >> newContact.name;
			std::cout << "please enter contact's nickname" << std::endl;
			std::cin >> newContact.name;
			std::cout << "please enter contact's phone number" << std::endl;
			std::cin >> newContact.name;
			ph.add_contact(newContact);

		} else if (str == "SEARCH")
			print_table(ph);
		else
			std::cout << "ERROR: UNKNOWN COMMAND. Please enter ADD, SEARCH or EXIT" << std::endl;
	}
	ph.add_contact(Contact("ashot", "ismailov", "mail"));
	std::cout << ph.getContact(0).name << std::endl;
	print_table(ph);
}