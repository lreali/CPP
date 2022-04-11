#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Type of Dog is " << j->getType() << std::endl;
	std::cout << "Type of Cat is " << i->getType() << std::endl;
	std::cout << "Type of meta is " << meta->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	}

	std::cout << "------------------Wrong Animal----------------------- " << std::endl;

	{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << "Type of Dog is " << j->getType() << std::endl;
	std::cout << "Type of WrongCat is " << i->getType() << std::endl;
	std::cout << "Type of meta is " << meta->getType() << std::endl;
	i->makeSound(); //will output the animal sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	}
	return 0;
}
