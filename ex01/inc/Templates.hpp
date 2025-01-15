/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:15:00 by stopp             #+#    #+#             */
/*   Updated: 2025/01/15 16:47:52 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T, typename FN>
void iter(T *array, size_t len, FN fn)
{
	if (array == nullptr || fn == nullptr)
		return ;
	for (size_t i = 0; i < len; i++)
		fn(array[i]);
}
