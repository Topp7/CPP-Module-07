/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:26:13 by stopp             #+#    #+#             */
/*   Updated: 2025/01/15 15:35:31 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

int	main(void)
{
	Array<int>	intArray(0);
	std::cout << "Size of intArray: " << intArray.size() << std::endl;
	try
	{
		std::cout << "Test access intArray[0]: ";
		std::cout << intArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<std::string> strArray(2);
	strArray[0] = "Hello, ";
	strArray[1] = "World!";
	std::cout << "Test print of strArray: strArray[0] and strArray[1]: " << strArray[0] << strArray[1] << std::endl;
	try
	{
		std::cout << "Test write to strArray[2]: ";
		strArray[2] = "test";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
