#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		size_t _size;
		T* _array;

	public:
		Array()
		{
			_size = 0;
			_array = NULL;
		}
		Array(size_t size)
		{
			_size = size;
			if (_size != 0)
				_array = new T[_size];
			else
				_array = NULL;
		}
		Array(const Array& other)
		{
			_array = NULL;
			*this = other;
		}

		const Array& operator =(const Array& other)
		{

			if (_array)
				delete [] _array;

			_size = other._size;
			_array = new T[_size];

			for (size_t i = 0; i < other._size; i++)
				_array[i] = other._array[i];

			return (*this);
		}
		~Array()
		{
			if (_array != NULL)
				delete[] _array;
		}

		class IndexTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("IndexTooHighException");
			}
		};

		T& operator[](size_t index)
		{
			if (index >= _size)
				throw Array::IndexTooHighException();
			return (_array[index]);
		}

		const T& operator[](size_t index) const
		{
			if (index >= _size)
				throw Array::IndexTooHighException();
			return (_array[index]);
		}

		size_t size() const
		{
			return (_size);
		}
};

#endif
