#include "Harl.hpp"

typedef void (Harl::*ptr_type) (void);

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger."
				 << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!"  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here"
				 " since last month."<< std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	const int LEN = 4;

	ptr_type arrPtr[LEN] = {&Harl::debug, &Harl::info, &Harl::warning,
						  &Harl::error};
	std::string logLevels[LEN] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < LEN; ++i)
	{
		if (level == logLevels[i])
			(this->*arrPtr[i])();
	}
}