#include "Span.hpp"

int main()
{
    const int sizeTest = 12000;
    std::srand(std::time(nullptr));

    try {
        Span span = Span(5);

        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);

        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "====================================" << std::endl;

    try{

        Span span = Span(sizeTest);

        std::vector<int> vector;
        for (int i = 0; i < sizeTest; i++)
            vector.push_back(std::rand());

        span.addNumber(vector.begin(), vector.end());
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "====================================" << std::endl;
    return 0;
}