/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:10:09 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/24 16:59:10 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib> 

# define DEFAULT "\001\033[0;39m\002"
# define BOLD "\001\033[1;89m\002"
# define RED "\001\033[1;91m\002"
# define BLUE "\001\033[1;36m\002"
# define YELLOW "\001\033[1;93m\002"

class Span
{
	private:
		int					_n;
		std::vector<int>	_array;
		
	public:
		Span();
		Span(int N);
		Span(Span const &s);
		Span &operator=(Span const &s);
		~Span();

		void 	addNumber(int nb);
		void	addMultipleNb(void);
		
		int 	shortestSpan(void);
		int		longestSpan(void);
		int		getMax(void) const;
		int		size(void) const;
};

std::ostream &operator<<( std::ostream &o, Span &s);

#endif