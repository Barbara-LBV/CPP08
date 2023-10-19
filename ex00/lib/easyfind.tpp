/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:09:41 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 18:43:50 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

# define DEFAULT "\001\033[0;39m\002"
# define BOLD "\001\033[1;89m\002"
# define RED "\001\033[1;91m\002"

template<typename T>
int	easyfind(const T &src, int find)
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = src.end();
	
	it = std::find(src.begin(), src.end(), find);
	 if (it != ite)
        return (*it);
    else
		throw std::out_of_range (RED "No corresponding data found in container" DEFAULT);
}