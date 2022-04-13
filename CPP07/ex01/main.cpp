#include "iter.hpp"
#include <iostream>


// class Awesome
// {
// public :
// Awesome( void ):_n(42){return;}
// int get(void) const{return this->_n;}
// private:
// 	int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a){o << a.get(); return o;}
//
//
template <typename T>
void print(const T& to_print)
{
	std::cout << to_print;
}
// //
// //
// int main()
// {
// 	int tab[] = {0 , 1, 2, 3, 4};
// 	Awesome tab2[5];
//
// 	iter(tab , 5 , print);
// 	iter(tab2, 5 , print);
// }

int main()
{
	char buffer[] = "Ceci est un test";
	int tab[6] = { 0, 1, 2, 5, 7, 12 };

	iter<char>(buffer, sizeof(buffer), print);
	std::cout << std::endl;
	iter<int>(tab, 6, print);
	std::cout << std::endl;
}
