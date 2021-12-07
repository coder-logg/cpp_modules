#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact{
public:
	explicit Contact(const std::string name, const std::string surname,
					 const std::string nickname, const std::string secret = "",
					 const std::string phoneNumber = "");
	Contact(const Contact &contact);
	Contact & operator=(const Contact &contact);
	Contact();
	std::string name;
	std::string surname;
	std::string nickname;
	std::string secret;
	std::string phone_number;
};
#endif
