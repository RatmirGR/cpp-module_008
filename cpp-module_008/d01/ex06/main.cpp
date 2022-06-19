#include "Harl.hpp"

int		main(int argc, char *argv[]) {
	Harl harl;
	int i;
	const int LEN = 4;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string logLevels[LEN] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < LEN; i++)
	{
		if (argv[1] == logLevels[i])
			break;
	}
	switch(i){
		case 0: harl.complain(logLevels[0]); std::cout << std::endl;
		case 1: harl.complain(logLevels[1]); std::cout << std::endl;
		case 2: harl.complain(logLevels[2]); std::cout << std::endl;
		case 3: harl.complain(logLevels[3]); std::cout << std::endl; break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}