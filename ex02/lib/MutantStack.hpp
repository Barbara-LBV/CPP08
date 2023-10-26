/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:11:01 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/26 17:03:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

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

class iterator;

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &s);
		MutantStack &operator=(MutantStack const &m);
		~MutantStack();
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void); 
};

#endif
