#include "Converter.hpp"


int main(int argc, char *argv[]){

    if (argc != 2)
        std::cout << "convert: bad arguments!" << std::endl;
    else
    {
        Converter p(argv[1]);
        std::cout << p << std::endl;
    }

    return (0);
}