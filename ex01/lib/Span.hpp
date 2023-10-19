/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:10:09 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 19:02:55 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

# define DEFAULT "\001\033[0;39m\002"
# define BOLD "\001\033[1;89m\002"
# define RED "\001\033[1;91m\002"

class Span
{
	private:
		int		_n;
		int*	_array;
		
	public:
		Span();
		Span(int N);
		Span(Span const &s);
		Span &operator=(Span const &s);
		~Span();

		void 	addNumber(int nb);
		int 	shortestSpan(int *tab);
		int		longestSpan(int *tab);
		int		getNb(void) const;
	
	class CantAddNumber : std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return (RED "cANNOT ADD NUMBER, TAB'S FULL." DEFAULT);
		}
	};
};

#endif