#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
	Contact	arrContacts[8];
	int		amountContact;
public:
	Phonebook();
	~Phonebook();
	void	add(int index);
	void 	search();
	void 	display();
};

#endif
