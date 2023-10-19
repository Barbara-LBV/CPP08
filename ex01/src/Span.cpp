/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:06 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 19:08:28 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Default constructor called" << std::endl;
	_n = 0;
	_array = NULL;
}

Span::Span(int N)
{
	std::cout << "Overloaded constructor called" << std::endl;
	_n = N;
	_array = new int[_n];
}

Span::Span(Span const &s)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = s;
}

Span &Span::operator=(Span const &s)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &s)
	{
		delete [] _array;
		_n = s.getNb();
		_array = new int[_n];
		for (int i = 0; i < _n; i++)
			_array[i] = s._array[i];
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
	if (this->_n > 0)
		delete [] _array;
}

int		Span::getNb(void) const
{
	return (_n);
}

void 	Span::addNumber(int nb)
{
	
}
int 	Span::shortestSpan(int *tab)
{
	
}

int		Span::longestSpan(int *tab)
{
	
}