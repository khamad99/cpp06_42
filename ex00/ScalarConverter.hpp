/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:36:08 by kalshaer          #+#    #+#             */
/*   Updated: 2023/09/28 11:37:00 by kalshaer         ###   ########.fr       */
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

class ScalarConverter
{
	private:
		std::string _str;
		int _precision;
		int _precisionFloat;
		int _precisionDouble;
		int _precisionChar;
		int _precisionInt;
		int _precisionFloatZero;
		int _precisionDoubleZero;
		int _precisionCharZero;
		int _precisionIntZero;
		int _precisionFloatNan;
		int _precisionDoubleNan;
		int _precisionCharNan;
		int _precisionIntNan;
		int _precisionFloatInf;
		int _precisionDoubleInf;
		int _precisionCharInf;
		int _precisionIntInf;
		int _precisionFloatPInf;
		int _precisionDoublePInf;
		int _precisionCharPInf;
		int _precisionIntPInf;
		int _precisionFloatNInf;
		int _precisionDoubleNInf;
		int _precisionCharNInf;
		int _precisionIntNInf;
		int _precisionFloatPZero;
		int _precisionDoublePZero;
		int _precisionCharPZero;
		int _precisionIntPZero;
		int _precisionFloatNZero;
		int _precisionDoubleNZero;
		int _precisionCharNZero;
		int _precisionIntNZero;
		int _precisionFloatPZeroZero;
		int _precisionDoublePZeroZero;
		int _precisionCharPZeroZero;
		int _precisionIntPZeroZero;
		int _precisionFloatNZeroZero;
		int _precisionDoubleNZeroZero;
		int _precisionCharNZeroZero;
		int _precisionIntNZeroZero;
		int _precisionFloatPInfZero;
		int _precisionDoublePInfZero;
		int _precisionCharPInfZero;
		int _precisionIntPInfZero;
		int _precisionFloatNInfZero;
		int _precisionDoubleNInfZero;
		int _precisionCharNInfZero;
		int _precisionIntNInfZero;
		int _precisionFloatPInfZeroZero;
		int _precisionDoublePInfZeroZero;
		int _precisionCharPInfZeroZero;
		int _precisionIntPInfZeroZero;
		int _precisionFloatNInfZeroZero;
		int _precisionDoubleNInfZeroZero;
		int _precisionCharNInfZeroZero;
		int _precisionIntNInfZeroZero;
		int _precisionFloatPInfNan;
		int _precisionDoubleP
		InfNan;
		int _precisionCharPInfNan;
		int _precisionIntPInfNan;
		int _precisionFloatNInfNan;
		int _precisionDoubleNInfNan;
		