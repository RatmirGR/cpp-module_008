#include "Array.tpp"

int main()
{

    std::cout << "<------------- TEST <int> ------------>" << std::endl;
    Array<int> arrayInt(5);
    for (unsigned int i = 0; i < arrayInt.getSize(); i++)
        arrayInt[i] = i;

    for (unsigned int i = 0; i < arrayInt.getSize(); i++){
        try{
            std::cout << "i: " << i << " " << arrayInt[i] << std::endl;
        }catch (std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "<------------- TEST <float> ------------>" << std::endl;
    Array<float> arrayFloat(5);
    for (unsigned int i = 0; i < arrayFloat.getSize(); i++){
        arrayFloat[i] = static_cast<float>(i + 1.5);
    }

    for (unsigned int i = 0; i < arrayFloat.getSize(); i++){
        try{
            std::cout << "i: " << i << " " << arrayFloat[i] << std::endl;
        }
        catch (std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "<------------- TEST <string> ------------>" << std::endl;
    Array<std::string> arrayString(5);
    arrayString[0] = "one";
    arrayString[1] = "two";
    arrayString[2] = "three";
    arrayString[3] = "four";
    arrayString[4] = "five";
    std::cout << "arrayString[0]: " << arrayString[0] << std::endl;
    try {
        std::cout << "arrayString[6]: " << arrayString[6] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Size: " << arrayString.getSize() << std::endl;

    return (0);
}