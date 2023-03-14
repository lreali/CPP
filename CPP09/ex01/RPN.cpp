// Use switch case for + - / *
// token final nbr = chiffrecount -1
//nbr token toujours < chiffrecount
#include "RPN.hpp"

RPN::RPN(std::string rpn) : _result(0), _error(false)
{
	if (rpn.find_first_not_of("0123456789 +-\t/*") != std::string::npos)
	{
		_error = true;
		std::cout << "Error" << std::endl;
	}
	else
			_calculate(rpn);
}

int 	RPN::getResult() const
{
	return(_result);
}

bool 	RPN::getError() const
{
	return(_error);
}

void	RPN::_calculate(std::string expr)
{
	std::string tokenList = "*/+-";
	for (size_t i = 0; i < expr.size() && _error == false; i++)
	{
		if (tokenList.find_first_of(expr[i]) != std::string::npos && _expression_digits.size() < 2)
		{
			_error = true;
			std::cout << "Error : wrong pos or number of token" << std::endl; break;
		}
		switch(expr[i])
		{
			case '*':
					_expression_digits[1] *= _expression_digits[0];
					_expression_digits.erase(_expression_digits.begin()); break;

			case '+':
					_expression_digits[1] += _expression_digits[0];
					_expression_digits.erase(_expression_digits.begin()); break;

			case '-':
					_expression_digits[1] -= _expression_digits[0];
					_expression_digits.erase(_expression_digits.begin());  break;

			case '/':
					if (_error == false && _expression_digits[1] == 0)
					{
						_error = true;
						std::cout << "Error : impossible to divide by 0" << std::endl;  break;
					}
					else
					{
						_expression_digits[1] = _expression_digits[1] / _expression_digits[0];
						_expression_digits.erase(_expression_digits.begin()); break;
					}

			case ' ':
							break;
			case '\t':
							break;
			case '\0':
							break;
			case '0' ... '9':
						_expression_digits.insert(_expression_digits.begin(), (unsigned int)expr[i] - 48); break;
			default :
					if (_error == false)
					{ _error = true; std::cout << "Error : wrong character" << std::endl; }
		}
	}
	if (_error == false && _expression_digits.size() != 1)
	{
		_error = true;
		std::cout << "Error : wrong number of token" << std::endl;
	}
	if (_error == false)
		_result = _expression_digits[0];
}

RPN::RPN(RPN const & rpn)
{
	_error = rpn._error;
	_result = rpn._result;
}

RPN &					RPN::operator=( RPN const & rhs )
{
	_error = rhs._error;
	_result = rhs._result;
	return (*this);
}

RPN::RPN() : _result(0), _error(false)
{}

RPN::~RPN()
{}
