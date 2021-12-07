#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"


Contact::Contact(const std::string name, const std::string surname,
				 const std::string nickname, const std::string secret,
				 const std::string phoneNumber)
				 : name(name), surname(surname), nickname(nickname),
				 secret(secret), phone_number(phoneNumber)
	{}

Contact::Contact()
{}

Contact & Contact::operator=(Contact const &contact)
{
	this->name = contact.name;
	this->surname = contact.surname;
	this->nickname = contact.nickname;
	this->secret = contact.secret;
	this->phone_number = contact.phone_number;
	return *this;
}

Contact::Contact(const Contact &contact)
{
	this->name = contact.name;
	this->surname = contact.surname;
	this->nickname = contact.nickname;
	this->secret = contact.secret;
	this->phone_number = contact.phone_number;
}

