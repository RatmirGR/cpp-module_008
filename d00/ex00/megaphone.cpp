#include <iostream>

int	main(int argc, char *argv[]){
	int len;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		for (int i = 1; i < argc; ++i){
			len = (int)strlen(argv[i]);
			for (int j = 0; j < len; ++j)
				std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return 0;
}