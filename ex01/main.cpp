/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:29:02 by kalshaer          #+#    #+#             */
/*   Updated: 2023/12/22 11:15:04 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data;
	data->name = "Kalshaer";
	data->id = 42;

	std::cout << "ptr:" << data << std::endl;

	uintptr_t raw = Serializer::serialize(data);
	std::cout << "ptr:" << raw << std::endl;
	std::cout << data->name << std::endl;
	std::cout << data->id << std::endl;

	Data *data2 = Serializer::deserialize(raw);
	std::cout << "ptr:" << data2 << std::endl;
	std::cout << data2->name << std::endl;
	std::cout << data2->id << std::endl;

	data->name = "Kalshaer99";
	data->id = 99;

	std::cout << data2->name << std::endl;
	std::cout << data2->id << std::endl;

	uintptr_t raw2 = Serializer::serialize(data);
	Data *data3 = Serializer::deserialize(raw2);
	std::cout << "ptr:" << data3 << std::endl;
	std::cout << data3->name << std::endl;
	std::cout << data3->id << std::endl;

	delete data;

	return (0);
}