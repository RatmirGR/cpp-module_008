#include "Contact.hpp"

void		Contact::setFirstName(std::string arg) {this->firstName = arg;}
std::string	Contact::getFirstName() {return (this->firstName);}

void		Contact::setLastName(std::string arg) {this->lastName = arg;}
std::string	Contact::getLastName() {return (this->lastName);}

void		Contact::setNickname(std::string arg) {this->nickname = arg;}
std::string	Contact::getNickname() {return (this->nickname);}

void		Contact::setPhoneNumber(std::string arg) {this->phoneNumber = arg;}
std::string	Contact::getPhoneNumber() {return (this->phoneNumber);}

void		Contact::setDarkestSecret(std::string arg) {this->darkestSecret = arg;}
std::string	Contact::getDarkestSecret() {return (this->darkestSecret);}

void		Contact::printContact() {
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Darkest secret: " << this->phoneNumber << std::endl;
	std::cout << "Phone number: " << this->darkestSecret << std::endl;
}