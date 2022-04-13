#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

#include "data.hpp"

class Serializer
{
private:

public:
	Serializer();
	Serializer(const Serializer& other);
	const Serializer& operator =(const Serializer& other);
	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
