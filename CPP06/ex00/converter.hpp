/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:12:51 by ereali            #+#    #+#             */
/*   Updated: 2022/04/13 08:11:15 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>
// #include <cctype>
#include <cstdlib>
class Converter
{
public:
	typedef enum e_Type
	{
		E_CHAR = 0,
		E_INT = 1,
		E_FLOAT = 2,
		E_DOUBLE = 3,
		E_INVALID = 4
	}Type;

	typedef enum e_Inf
	{
		E_NEG_INF = 0,
		E_VALID = 1,
		E_NAN = 2,
		E_INF = 3
	}Inf;

private:
	bool _charValidity;
	char _char;

	bool _intValidity;
	int _int;

	bool _floatValidity;
	Inf _floatIntegrity;
	float _float;

	bool _doubleValidity;
	Inf _doubleIntegrity;
	double _double;

	void _parseChar(std::string str);
	void _parseInt(std::string str);
	void _parseFloat(std::string str);
	void _parseDouble(std::string str);

	Type _checkType(std::string str);

public:
	Converter();
	Converter(std::string str);
	Converter(const Converter& p_other);

	void parse(std::string str);
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	const Converter& operator =(const Converter& p_other);

	~Converter();
};
#endif
