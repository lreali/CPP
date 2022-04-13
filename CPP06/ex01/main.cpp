#include "serializer.hpp"
#include <iostream>

int main()
{
	Data data;

	uintptr_t dataConverted;
	Data* dataPtr;

	dataConverted = Serializer::serialize(&data);
	dataPtr = Serializer::deserialize(dataConverted);

	if (dataPtr != &data)
	{
		std::cout << "Error" << std::endl;
	}
	else
	{
		std::cout << "Success !" << std::endl;
	}

	return (0);
}
