#ifndef EASYFIND_H
#define EASYFIND_H


class EasyfindException : public std::exception
{
    public:
        const char* what() const throw() { return "EasyfindException"; };
};

template <typename T>
typename T::iterator easyfind(T&  contener, int value)
{
	typename T::iterator it = std::find(contener.begin(), contener.end(), value);

	if (it == contener.end())
		throw EasyfindException();
	else
		return (it);
}

template <typename T>
typename T::const_iterator easyfind(const T&  contener,const int value)
{
	typename T::const_iterator it = std::find(contener.begin(), contener.end(), value);

	if (it == contener.end())
		throw EasyfindException();
	else
		return (it);
}

#endif
