#ifndef BASE_HPP
#define BASE_HPP

class Base
{
private:

public:
	virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

typedef enum e_Type
{
	E_TYPE_A = 0,
	E_TYPE_B = 1,
	E_TYPE_C = 2,
	E_ERROR = -1
}Type;

#endif
