/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:13:53 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/24 15:54:31 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/easyfind.tpp"

int main()
{
	std::list<int>	lst;
	int	occ;
	
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	
	std::cout << BOLD "*** Lists Containers ***" DEFAULT << std::endl;
	try
	{
		occ = easyfind(lst, 3);
		std::cout << "Occurrence = " << occ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << BOLD "*** Vectors Containers ***" DEFAULT<< std::endl;

	std::vector<int>	v;
	int	occ2;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	try
	{
		occ2 = easyfind(v, 0);
		std::cout << "Occurrence = " << occ2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}