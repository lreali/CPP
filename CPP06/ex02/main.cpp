#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "base.hpp"

Base::~Base()
{
}

Base* generate()
{
	int value = rand() % 3;

	switch (value)
	{
	case 0 :
		std::cout << "New A !" << std::endl;
		return (new A);
	case 1 :
		std::cout << "New B !" << std::endl;
		return (new B);
	case 2 :
		std::cout << "New C !" << std::endl;
		return (new C);
	default :
		std::cout << "Error on generation : unexpected result";
		return (NULL);
	}
}

void identify(Base* p)
{
	Type data_type = E_ERROR;

	if (dynamic_cast<A*>(p))
		data_type = E_TYPE_A;
	else if (dynamic_cast<B*>(p))
		data_type = E_TYPE_B;
	else if (dynamic_cast<C*>(p))
		data_type = E_TYPE_C;

	switch (data_type)
	{
	case E_TYPE_A:
		std::cout << "A" << std::endl;
		break;
	case E_TYPE_B:
		std::cout << "B" << std::endl;
		break;
	case E_TYPE_C:
		std::cout << "C" << std::endl;
		break;
	case E_ERROR:
		std::cout << "ERROR ! ERROR !" << std::endl;
		break;
	}
}

void identify(Base& p)
{
	Type data_type = E_ERROR;

	try
	{
		(void)dynamic_cast<A&>(p);
		data_type = E_TYPE_A;
	}
	catch (std::exception &e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			data_type = E_TYPE_B;
		}
		catch (std::exception &e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				data_type = E_TYPE_C;
			}
			catch (std::exception &e)
			{}
		}
	}

	switch (data_type)
	{
	case E_TYPE_A:
		std::cout << "A" << std::endl;
		break;
	case E_TYPE_B:
		std::cout << "B" << std::endl;
		break;
	case E_TYPE_C:
		std::cout << "C" << std::endl;
		break;
	case E_ERROR:
		std::cout << "ERROR ! ERROR !" << std::endl;
		break;
	}
}

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 6; i++)
	{
		Base* tmpBase1 = generate();
		identify(tmpBase1);
		delete tmpBase1;
	}

	for (int i = 0; i < 6; i++)
	{
		Base& tmpBase2 = *generate();
		identify(tmpBase2);
		delete &tmpBase2;
	}

	return(0);
}
