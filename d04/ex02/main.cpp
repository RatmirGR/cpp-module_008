#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "======================" << std::endl;

	const int	SIZE_ARR = 100;
	const Animal *animal[SIZE_ARR];

	for (int k = 0; k < SIZE_ARR; ++k)
	{
		if (k % 2 == 0)
			animal[k] = new Cat();
		else
			animal[k] = new Dog();
	}

	std::cout << "======================" << std::endl;

	for (int i = 0; i < SIZE_ARR; ++i)
	{
		if (i % 20 == 0 && i > 0)
			std::cout << std::endl;
		std::cout << animal[i]->getType() << ", ";
	}
	std::cout << std::endl;

	std::cout << "======================" << std::endl;

	for (int k = 0; k < SIZE_ARR; ++k)
		delete animal[k];

	std::cout << "======================" << std::endl;

	Cat cat;
	Cat cat1(cat);
	Cat cat2 = cat;
	std::cout << "cat: " << &cat.getBrain() << std::endl;
	std::cout << "cat1: " << &cat1.getBrain() << std::endl;
	std::cout << "cat2: " <<&cat2.getBrain() << std::endl;

	std::cout << "======================" << std::endl;

	Dog dog;
	Dog dog1(dog);
	Dog dog2 = dog;
	std::cout << "dog: " << &dog.getBrain() << std::endl;
	std::cout << "dog1: " << &dog1.getBrain() << std::endl;
	std::cout << "dog2: " << &dog2.getBrain() << std::endl;

	std::cout << "======================" << std::endl;

	return 0;
}