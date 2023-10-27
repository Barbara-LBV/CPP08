/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:10:58 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/27 11:55:30 by blefebvr         ###   ########.fr       */
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
	(void)m;
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << BOLD "Destructor called." DEFAULT << std::endl << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return std::stack<T>::c.end();
}
