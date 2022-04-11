#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
	int num = 10;
	const Animal* j = new Dog();
	const Animal* c = new Cat();
	Animal* b[10];
	int i =0;
	while (i < num / 2)
	{
		b[i] = new Dog();
		i++;
	}
	while (i < num)
	{
		b[i] = new Cat();
		i++;
	}
	delete j;//should not create a leak
	delete c;
	i =0;

	while (i < num)
	{
		b[i]->PrintIdeas();
		b[i]->makeSound();
		delete b[i];
		i++;
	}
	}

	std::cout << "------------------GivenMain----------------------- " << std::endl;

	{
	const Dog d;
	const Dog g(d);

	// Animal io;
	Animal* j = new Dog();
	Animal* f = new Dog(d);
	const Animal* i = new Cat();

	*f = *j;

	delete f;
	delete j;//should not create a leak
	delete i;
	}
	const Dog zbeub;

	return 0;
}
