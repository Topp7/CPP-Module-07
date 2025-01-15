/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:54:18 by stopp             #+#    #+#             */
/*   Updated: 2025/01/15 15:19:36 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

template <typename T>
Array<T>::Array() : _array(nullptr), _n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	if (_n > 0)
		_array = new T[_n]();
}

template <typename T>
Array<T>::Array(const Array &copy) : _n(copy._n)
{
	_array = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = copy._array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &copy)
{
	if (this == &copy)
		return *this;
	if (_array != nullptr)
		delete[] _array;
	_n = copy._n;
	_array = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = copy._array[i];
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _n;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _n || _array == nullptr)
		throw std::exception();
	return _array[index];
}
