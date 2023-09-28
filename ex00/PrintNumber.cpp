/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintNumber.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:34:49 by kalshaer          #+#    #+#             */
/*   Updated: 2023/09/28 11:35:35 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PrintNumber.hpp"

PrintNumber::PrintNumber(std::string str) : _str(str)
{
	return;
}

PrintNumber::PrintNumber(PrintNumber const & src)
{
	*this = src;
	return;
}

PrintNumber::~PrintNumber(void)
{
	return;
}

PrintNumber & PrintNumber::operator=(PrintNumber const & rhs)
{
	if (this != &rhs)
		this->_str = rhs.getStr();
	return (*this);
}

std::string PrintNumber::getStr(void) const
{
	return (this->_str);
}

void PrintNumber::setStr(std::string str)
{
	this->_str = str;
}

void PrintNumber::printChar(void)
{
	char c;
	int i;

	i = std::stoi(this->_str);
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
	{
		c = static_cast<char>(i);
		std::cout << "char: " << c << std::endl;
	}
}

void PrintNumber::printInt(void)
{
	int i;

	i = std::stoi(this->_str);
	std::cout << "int: " << i << std::endl;
}

void PrintNumber::printFloat(void)
{
	float f;

	f = std::stof(this->_str);
	std::cout << "float: " << f;
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void PrintNumber::printDouble(void)
{
	double d;

	d = std::stod(this->_str);
	std::cout << "double: " << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

std::ostream & operator<<(std::ostream & o, PrintNumber const & rhs)
{
	o << rhs.getStr();
	return (o);
}

