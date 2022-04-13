#include "serializer.hpp"


Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer& p_other)
{
	(void)p_other;
}

const Serializer& Serializer::operator =(const Serializer& p_other)
{
	(void)p_other;
	return (*this);
}

Serializer::~Serializer()
{

}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{

	return(reinterpret_cast<Data *> (raw));
}
