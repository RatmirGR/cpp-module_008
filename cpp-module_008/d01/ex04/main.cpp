#include <string>
#include <iostream>
#include <fstream>

int		main(int argc, char *argv[]) {
	if (argc != 4){
		std::cout << "Wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream fileInput(argv[1]);
	if (!fileInput){
		std::cout << "Cannot open the file to input" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ofstream fileOutput(filename + ".replace");
	if (!fileOutput){
		std::cout << "Cannot open the file to output" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string buf;
	size_t pos;

	while (!fileInput.eof()){
		std::getline(fileInput, buf);
		pos = buf.find(s1);
		while (pos < buf.size()){
			buf.erase(pos, s1.size());
			buf.insert(pos, s2);
			pos = buf.find(s1);
		}
		fileOutput << buf << std::endl;
	}
	fileInput.close();
	fileOutput.close();
	return 0;
}