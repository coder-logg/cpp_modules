#include "Phonebook.h"

Phonebook::Phonebook() : size(0), count(0)
	{};

void Phonebook::add_contact(const Contact &contact)
{
	if (size < 8)
		size++;
	contacts[count++] = contact;
	if (count == 8)
		count = 0;
}

const Contact *Phonebook::getContacts() const
{
	return contacts;
}

const Contact &Phonebook::getContact(unsigned index) const
{
	return contacts[index];
}

unsigned int Phonebook::getSize() const
{
	return size;
}


