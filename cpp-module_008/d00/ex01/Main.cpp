#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	std::string input;
	int index;

	while (true)
	{
		std::cout << "Phonebook: ";
		std::cin >> input;
		if (input == "ADD")
		{
			phonebook.add(index);
			index++;
			if (index == 8)
				index = 0;
		} else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break;
	}
	return 0;
}