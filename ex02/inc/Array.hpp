/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:52:32 by stopp             #+#    #+#             */
/*   Updated: 2025/01/15 14:40:21 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_n;

	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &copy);
		Array	&operator=(const Array &copy);

		unsigned int	size() const;
		T		&operator[](unsigned int index) const;
};
#include "../src/Array.tpp"
