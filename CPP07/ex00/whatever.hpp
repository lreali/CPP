#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& valueA, T& valueB)
{
	T tmvalue = valueA;
	valueA = valueB;
	valueB = tmvalue;
}

template <typename T>
T &min(T& valueA, T& valueB)
{
	if (valueA < valueB)
		return (valueA);
	return(valueB);
}

template <typename T>
T &max(T& valueA, T& valueB)
{
	if (valueA > valueB)
		return (valueA);
	return(valueB);
}



#endif
