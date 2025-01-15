/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:15:00 by stopp             #+#    #+#             */
/*   Updated: 2025/01/15 12:25:00 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T>
void iter(T *array, size_t len, void (*fn)(T &))
{
	if (array == nullptr || fn == nullptr)
		return ;
	for (size_t i = 0; i < len; i++)
		fn(array[i]);
}
