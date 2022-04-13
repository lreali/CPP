/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:12:51 by ereali            #+#    #+#             */
/*   Updated: 2022/04/13 03:33:54 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>

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
	bool _char_validity;
	char _char;

	bool _int_validity;
	int _int;

	bool _float_validity;
	Inf _float_integrity;
	float _float;

	bool _double_validity;
	Inf _double_integrity;
	double _double;

	void _parseChar(std::string p_str);

	void _parseInt(std::string p_str);

	void _parseFloat(std::string p_str);
	void _parseDouble(std::string p_str);

	Type _checkType(std::string p_str);

public:
	Converter();
	Converter(std::string p_str);
	Converter(const Converter& p_other);
	void parse(std::string p_str);
	const Converter& operator =(const Converter& p_other);
	~Converter();
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
};
#endif
