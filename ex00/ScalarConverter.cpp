/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:31:36 by kalshaer          #+#    #+#             */
/*   Updated: 2023/10/25 07:42:11 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src)
{
	(void)src;
	return (*this);
}

static int	isChar(std::string str)
{
	if (str.length() != 1)
		return (0);
	if (str.at(0) < std::numeric_limits<char>::min()
		|| str.at(0) > std::numeric_limits<char>::max()
		|| std::isdigit(str.at(0)))
		return (0);
	return (1);
}

static int	isInt(std::string str)
{
	if (std::stoi(str) > std::numeric_limits<int>::max()
		|| std::stoi(str) < std::numeric_limits<int>::min())
		return (0);
	return (1);
}

static int	isFloat(std::string str)
{
	if (std::stof(str) > std::numeric_limits<float>::max()
		|| std::stof(str) < std::numeric_limits<float>::min())
		return (0);
	return (1);

}

static int	isDouble(std::string str)
{
	if (std::stod(str) > std::numeric_limits<double>::max()
		|| std::stod(str) < std::numeric_limits<double>::min())
		return (0);
	return (1);
}

static int	isLerr(std::string str)
{
	if (str == "nan" || str == "nanf" 
		|| str == "-inf" || str == "+inf" 
		|| str == "-inff" || str == "+inff"
		|| str == "inf" || str == "inff")
		return (1);
	return (0);
}

static e_type	getType(std::string str)
{
	if (isLerr(str))
		return (LERR);
	else if (isChar(str))
		return (CHAR);
	else if (isInt(str))
		return (INT);
	else if (isFloat(str))
		return (FLOAT);
	else if (isDouble(str))
		return (DOUBLE);
	return (NO_TYPE);
}

static void	printChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void	printInt(int i)
{
	std::cout << "char: ";
	if (i < 0 || i > 127)
		std::cout << "impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

static void	printFloat(float f)
{
	std::cout << "char: ";
	if (f < 0 || f > 127)
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: ";
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

static void	printDouble(double d)
{
	std::cout << "char: ";
	if (d < 0 || d > 127)
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: ";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "float: ";
	if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

static void	printLerr(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff")
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	}
	else
	{
		std::cout << "float: nan" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void	ScalarConverter::converter(std::string str)
{
	e_type type = getType(str);

	if (type == CHAR)
		printChar(str[0]);
	else if (type == INT)
		printInt(std::stoi(str));
	else if (type == FLOAT)
		printFloat(std::stof(str));
	else if (type == DOUBLE)
		printDouble(std::stod(str));
	else if (type == LERR)
		printLerr(str);
	else
		std::cout << "Error: Invalid input" << std::endl;
}
