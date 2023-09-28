/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintNumber.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:34:24 by kalshaer          #+#    #+#             */
/*   Updated: 2023/09/28 11:35:59 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTNUMBER_HPP
# define PRINTNUMBER_HPP

# include <iostream>
# include <string>

class PrintNumber
{
	private:
		std::string _str;
	public:
		PrintNumber(std::string str);
		PrintNumber(PrintNumber const & src);
		~PrintNumber(void);
		PrintNumber & operator=(PrintNumber const & rhs);
		std::string getStr(void) const;
		void setStr(std::string str);
		void printChar(void);
		void printInt(void);
		void printFloat(void);
		void printDouble(void);
};

std::ostream & operator<<(std::ostream & o, PrintNumber const & rhs);

#endif
