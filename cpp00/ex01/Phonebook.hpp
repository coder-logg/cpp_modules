#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <array>

class Phonebook {
public:
	Phonebook();
	explicit Phonebook(const Contact contacts[8]);
//	~Phonebook();
	void add_contact(const Contact &contact);
	const Contact &getContact(unsigned int index) const;
	const Contact *getContacts() const;

private:
	unsigned size;
public:
	unsigned int getSize() const;

private:
	Contact contacts[8];
	mutable unsigned count;
};
#endif
