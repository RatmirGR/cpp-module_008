#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "PHONEBOOK" << std::endl;
	std::cout << "- ADD - (add a new contact to the phone book)" << std::endl;
	std::cout << "- SEARCH - (search for data by index)" << std::endl;
	std::cout << "- EXIT - (exit from the program)" << std::endl;

	amountContact = 0;
}

Phonebook::~Phonebook(void)
{}

void	Phonebook::add(int index)
{
	std::string	input;

	std::cin.ignore(32767, '\n');

	while (true)
	{
		std::cout << "First name: ";
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << "field cannot be empty" << std::endl;
	}
	arrContacts[index].setFirstName(input);

	while (true)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << "field cannot be empty" << std::endl;
	}
	arrContacts[index].setLastName(input);

	while (true)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << "field cannot be empty" << std::endl;
	}
	arrContacts[index].setNickname(input);

	while (true)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << "field cannot be empty" << std::endl;
	}
	arrContacts[index].setPhoneNumber(input);

	while (true)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << "field cannot be empty" << std::endl;
	}
	arrContacts[index].setDarkestSecret(input);

	amountContact++;
}

void	Phonebook::search()
{
	std::string index;
	int 		numIdx;

	if (amountContact > 0)
	{
		display();
		while (true)
		{
			std::cout << "Enter index (from 0 to " << (amountContact - 1)
					  << "): ";
			std::cin >> index;
			numIdx = index[0] - 48;
			if (index.length() == 1 && numIdx >= 0 &&
				numIdx <= amountContact - 1)
				break;
			else
				std::cout << "Error: Wrong index" << std::endl;
		}
		arrContacts[numIdx].printContact();
	}
	else
		std::cout << "Contact list is empty" << std::endl;
}

void	Phonebook::display()
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < amountContact; i++)
	{
		std::cout << std::setw(10) << i << "|";
		if (arrContacts[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << arrContacts[i].getFirstName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << arrContacts[i].getFirstName() << "|";

		if (arrContacts[i].getLastName().length() > 10)
			std::cout << std::setw(10) << arrContacts[i].getLastName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << arrContacts[i].getLastName() << "|";

		if (arrContacts[i].getNickname().length() > 10)
			std::cout << std::setw(10) << arrContacts[i].getNickname().substr(0, 9) + "." << std::endl;
		else
			std::cout << std::setw(10) << arrContacts[i].getNickname() <<
			std::endl;
	}
}