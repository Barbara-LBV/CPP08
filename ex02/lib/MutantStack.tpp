/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:10:58 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/24 18:14:42 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << BOLD "Default constructor called." DEFAULT << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &s)
{
	std::cout << BOLD "Copy constructor called." DEFAULT << std::endl;
	*this = s;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack <T> const &m)
{
	std::cout << BOLD "Assignment operator called." DEFAULT << std::endl;
	//this->_array = new T[a._n];
	if (this != &m)
	{
		//delete [] _array;
		//_n = a.size();
		//_array = new T[_n];
		//for (int i = 0; i < _n; i++)
		//	_array[i] = a._array[i];
	}
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << BOLD "Destructor called." DEFAULT << std::endl;
}

template<typename T>
T 	&MutantStack<T>::begin(void)
{
	return (T);
}

template<typename T>
T 	&MutantStack<T>::end(void)
{
	return (T);
}