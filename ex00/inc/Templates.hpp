/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:15:00 by stopp             #+#    #+#             */
/*   Updated: 2025/01/14 18:21:42 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a == b)
		return b;
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T a, T b)
{
	if (a == b)
		return b;
	if (a > b)
		return a;
	else
		return b;
}
