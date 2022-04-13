#include "serializer.hpp"
#include <iostream>

int main()
{
	Data data;

	uintptr_t data_converted;
	Data* data_ptr;

	data_converted = Serializer::serialize(&data);
	data_ptr = Serializer::deserialize(data_converted);

	if (data_ptr != &data)
	{
		std::cout << "Error" << std::endl;
	}
	else
	{
		std::cout << "Success !" << std::endl;
	}

	return (0);
}
