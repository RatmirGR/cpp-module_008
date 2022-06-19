#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	void setFirstName(std::string arg);

	std::string getFirstName();

	void setLastName(std::string arg);

	std::string getLastName();

	void setNickname(std::string arg);

	std::string getNickname();

	void setPhoneNumber(std::string arg);

	std::string getPhoneNumber();

	void setDarkestSecret(std::string arg);

	std::string getDarkestSecret();

	void printContact();
};

#endif
