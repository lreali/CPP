#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// {
	// const Animal* j = new Dog();
	// const Animal* c = new Cat();
	// Animal b[10];
	// int i;
	// while (i < 10 / 2)
	// {
	// 	b[i] = j;
	// 	i++;
	// }
	// while (i < 10)
	// {
	// 	b[i] = c;
	// 	i++;
	// }
	// delete j;//should not create a leak
	// delete c;
	// }

	std::cout << "------------------GivenMain----------------------- " << std::endl;

	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	}
	return 0;
}
