/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:11:01 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/24 18:14:01 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifdef MUTANTSTACK_HPP
//#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib> 
#include <stack>

# define DEFAULT "\001\033[0;39m\002"
# define BOLD "\001\033[1;89m\002"
# define RED "\001\033[1;91m\002"
# define BLUE "\001\033[1;36m\002"
# define YELLOW "\001\033[1;93m\002"

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		T 	_array;
		
	public:
		MutantStack();
		MutantStack(const MutantStack<T> &s);
		MutantStack &operator=(MutantStack const &m);
		~MutantStack();

		T 	&begin(void);
		T 	&end(void);	
};

//std::ostream &operator<<( std::ostream &o, MutantStack const &m);

//#endif
