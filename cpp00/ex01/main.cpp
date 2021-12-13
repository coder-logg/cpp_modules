#include <iostream>
#include <string>
#include "Phonebook.hpp"
#include <iomanip>

std::string check_size(std::string str)
{
	if (str.size() > 10)
		return str.substr(0, 9).insert(9, ".");
	return str;
}

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
	for (unsigned i = 0; i < ph.getSize(); i++)
	{
		std::cout << "|" << std::setw(n) << i + 1;
		std::cout << "|" << std::setw(10) << check_size(ph.getContact(i).name);
		std::cout << "|" << std::setw(10) << check_size(ph.getContact(i).surname);
		std::cout << "|" << std::setw(10) << check_size(ph.getContact(i).nickname) << "|" << std::endl;
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
		std::cout << "Enter command: ";
		std::cin >> str;
		if (str == "EXIT")
			exit(0);
		else if (std::cin.eof())
			break;
		else if (str == "ADD")
		{
			Contact newContact;
			std::cout << "please enter contact's name" << std::endl;
			std::cin >> newContact.name;
			std::cout << "please enter contact's surname" << std::endl;
			std::cin >> newContact.surname;
			std::cout << "please enter contact's nickname" << std::endl;
			std::cin >> newContact.nickname;
			std::cout << "please enter contact's phone number" << std::endl;
			std::cin >> newContact.phone_number;
			std::cout << "please enter contact's darkest secret" << std::endl;
			std::cin >> newContact.secret;
			ph.add_contact(newContact);

		} else if (str == "SEARCH")
			print_table(ph);
		else
			std::cout << "ERROR: UNKNOWN COMMAND. Please enter ADD, SEARCH or EXIT" << std::endl;
	}
}