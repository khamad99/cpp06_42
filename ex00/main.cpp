/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:33:37 by kalshaer          #+#    #+#             */
/*   Updated: 2023/12/22 10:50:17 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	is_all_digit_or_dot(std::string str)
{
	int flag = 0;
	int flag2 = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (flag2 > 1)
			return (false);
		if (flag > 1)
			return (false);
		if (str.at(i) == 'f')
			++flag;
		if (str.at(i) == '.')
			++flag2;
		if (!std::isdigit(str.at(i)) && str.at(i) != '.' && str.at(i) != 'f')
			return (false);
	}
	return (true);
}

bool	is_all_not_digit(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str.at(i)))
			return (false);
	}
	return (true);
}	

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return (1);
	}
	if (!is_all_not_digit((std::string)argv[1]) && !is_all_digit_or_dot((std::string)argv[1]))
	{
		std::cout << "invalid input" << std::endl;
		return (1);
	}
	try
	{
		ScalarConverter::converter(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
