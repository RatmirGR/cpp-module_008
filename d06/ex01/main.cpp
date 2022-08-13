#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
    Data    *data = new Data;

    data->name = "Den";
    data->status = "student";
    data->age = 34;

    std::cout << "data->name: " << data->name << std::endl;
    std::cout << "data->status: " << data->status << std::endl;
    std::cout << "data->age: " << data->age << std::endl;

    uintptr_t   raw = serialize(data);

    std::cout << "====================" << std::endl;

    Data    *newData = deserialize(raw);

    std::cout << "newData->name: " << newData->name << std::endl;
    std::cout << "newData->status: " << newData->status << std::endl;
    std::cout << "newData->age: " << newData->age << std::endl;

    delete data;

    return (0);
}