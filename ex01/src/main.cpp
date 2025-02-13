/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:19:24 by stopp             #+#    #+#             */
/*   Updated: 2025/01/15 16:47:06 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Templates.hpp"
#include <iostream>
#include <string>
template <typename T>
int		output_tst(int &i)
{
	std::cout << "returning i: " << i << std::endl;
	return (i);
}
template <typename T>
void	test_print_int(T &i)
{
	std::cout << i << std::endl;
}
void	test_print_str(std::string &str)
{
	std::cout << str << std::endl;
}
int main(void)
{
	int			intArray[4] = {42, 41, 4, 2};
	std::string	strArray[4] = {"4", "2", "42", "41"};

	std::cout << "----   Test with int array:" << std::endl;
	::iter(intArray, 4, test_print_int<int>);
	std::cout << "----   Test with str array:" << std::endl;
	::iter(strArray, 4, test_print_str);
}
