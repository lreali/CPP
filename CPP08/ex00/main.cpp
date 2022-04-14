#include <vector>
#include <iostream>
#include <iterator>
#include <list>
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    vec.push_back(56);
    vec.push_back(20);
    vec.push_back(8);
    vec.push_back(64);

	std::list<int> list;
	list.push_back(2);
    list.push_back(4);
    list.push_back(6);
    list.push_back(90);

    std::vector<int>::iterator iter = easyfind(vec, 20);
    std::cout << *iter << std::endl;
	std::list<int>::iterator iter2 = easyfind(list, 4);
	std::cout << *iter2 << std::endl;

    try
    {
        iter = easyfind(vec, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
