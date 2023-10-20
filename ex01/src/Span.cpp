/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:06 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/20 17:59:35 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Default constructor called" << std::endl;
	_n = 0;
}

Span::Span(int N)
{
	std::cout << "Overloaded constructor called" << std::endl;
	_n = N;
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
		_n = s.getMax();
		_array = s._array;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<( std::ostream &o, Span const &s)
{
	int	shortest = s.shortestSpan();
	int	longest = s.longestSpan();

	o << "Span of max size " << s.getMax() << " contains: " << std::endl
		<< s.size() << " numbers, " << std::endl
		<< "Shortest span is " << shortest << std::endl 
		<< "Longest is " << longest << std::endl;
	return (o);
}

int		Span::getMax(void) const
{
	return (_n);
}

int		Span::size(void) const
{
	return (_array.size());
}

void 	Span::addNumber(int nb)
{
	if (this->size() > this->getMax())
		throw Span::CantAddNumber();
	_array.push_back(nb);
	std::sort(_array.begin(), _array.end());
	for (std::vector<int>::iterator it =_array.begin(); it!= _array.end(); ++it)
    std::cout << ' ' << *it;
}

int 	Span::shortestSpan(void) const
{
	int	short;
	
	
	return (short);
}

int		Span::longestSpan(void) const
{
	int	long;
	
	
	return(long);
}
