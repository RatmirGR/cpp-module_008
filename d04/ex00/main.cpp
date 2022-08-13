#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "type: " << j->getType() << " " << std::endl;
	std::cout << "type: " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "============================" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "type: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "type: " << wrongCat->getType() << " " << std::endl;
	wrongAnimal->makeSound(); //will output the cat sound!
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}