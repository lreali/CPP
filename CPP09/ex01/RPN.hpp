#ifndef RPN_HPP
#define RPN_HPP
#include <vector>
#include <string>
#include <iostream>

class RPN
{
	public:
		RPN( std::string rpn);
		RPN( RPN const & rpn);
		RPN &					operator=( RPN const & rhs );
		int 	getResult() const;
		bool 	getError() const;

		RPN();
		~RPN();
	private:
		void						_calculate(std::string);
		std::vector<int>	_expression_digits;
		int							_result;
		bool						_error;
};

#endif
