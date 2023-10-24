/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:06 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/24 16:57:36 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Span.hpp"

Span::Span()
{
	std::cout << BLUE "Default constructor called" DEFAULT << std::endl;
	_n = 0;
}

Span::Span(int N)
{
	std::cout << BLUE "Overloaded constructor called" DEFAULT << std::endl;
	_n = N;
}

Span::Span(Span const &s)
{
	std::cout << BLUE "Copy constructor called" DEFAULT << std::endl;
	*this = s;
}

Span &Span::operator=(Span const &s)
{
	std::cout << BLUE "Assignment operator called" DEFAULT << std::endl;
	if (this != &s)
	{
		_n = s.getMax();
		_array = s._array;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << BLUE "Destructor called" DEFAULT << std::endl;
}

std::ostream &operator<<( std::ostream &o, Span &s)
{
	int	shortest = s.shortestSpan();
	int	longest = s.longestSpan();

	o << BOLD "Span of max size " << s.getMax() << " contains: " << std::endl
		<< s.size() << " numbers, " << std::endl
		<< "Shortest span is " << shortest<< std::endl 
		<< "Longest is " << longest << DEFAULT;
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
	if (this->size() < this->getMax())
		_array.push_back(nb);
	else if (this->size() == this->getMax())
	{
		throw std::out_of_range(YELLOW "Cannot add number, reach the max size of the array." DEFAULT);
	}
	//std::cout << _array.at(size()- 1) << std::endl;
}

void	Span::addMultipleNb(void)
{
	std::srand (unsigned(std::time(0)));
	for (int i = 0; i < _n; i++)
		addNumber(rand() % (this->getMax() * 10));
}

int 	Span::shortestSpan(void)
{
	std::vector<int>			tmp = _array;
	std::vector<int>::iterator 	it = tmp.begin();
	
	if (tmp.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	sort(tmp.begin(), tmp.end());	
	int shortest = (*(it + 1)) - *it;
	for ( ; it != tmp.end() - 1 && shortest != 0; it++)
    {
		if ((*(it + 1) - *it) != 0 &&  (*(it + 1) - *it) < shortest)
			shortest = *(it + 1) - *it;
	}
	return (shortest);
}

int Span::longestSpan(void)
{
	int longest;
	
	if (_array.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	sort(_array.begin(), _array.end());
	longest = _array.at(size() - 1) - _array.at(0);
	return (longest);
}
