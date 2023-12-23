/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:00:15 by kalshaer          #+#    #+#             */
/*   Updated: 2023/12/22 10:59:52 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits>
# include <sstream>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer(void);
		Serializer(Serializer const & src);
		~Serializer(void);
		Serializer & operator=(Serializer const & rhs);

	public:
		static Data * deserialize(uintptr_t raw);
		static uintptr_t serialize(Data *ptr);
};

#endif
