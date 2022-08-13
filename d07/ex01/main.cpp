#include "iter.hpp"

int main( void ) {

    int     array1[5] = {1, 2, 3, 4, 5};
    iter(array1, 5, &printMsg);

    std::cout << "\n=========================" << std::endl;

    char     array2[13] = "This is text";
    iter(array2, 12, &printMsg);

    std::cout << "\n=========================" << std::endl;

    std::string     array3[3] = {"This", "is", "text"};
    iter(array3, 3, &printMsg);

    std::cout << "\n=========================" << std::endl;

    return 0;
}