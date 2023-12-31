/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:36:08 by kalshaer          #+#    #+#             */
/*   Updated: 2023/12/24 18:55:56 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits>
# include <sstream>
# include <cstdlib>
# include <cctype>

enum e_type
{
	NO_TYPE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	IMPOSSIBLE,
	LERR
};
class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & src);
	public:
		static void		converter(std::string str);
};

#endif
		