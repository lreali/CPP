#ifndef ITER_HPP
#define ITER_HPP
# include <string>

template<typename T>
void iter(T* tab, size_t TabSize, void (*funct)(const T&))
{
	for (size_t i = 0; i < TabSize; i++)
	{
		funct(tab[i]);
	}
}

#endif
