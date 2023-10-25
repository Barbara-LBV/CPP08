/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:02 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/25 16:25:39 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Span.hpp"

int main()
{
	std::cout << RED "******* Manual array filling *******" DEFAULT << std::endl;
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		//sp.addNumber(11);
		//sp.addNumber(25);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << sp << std::endl << std::endl;
	
	std::cout << RED "******* Automatic array filling *******" DEFAULT << std::endl;
	Span sp2 = Span(1000);
	try
	{
		sp2.addMultipleNb();
		sp2.addNumber(25);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp2 << std::endl << std::endl;
	
	std::cout << RED "******* Another exception test *******" DEFAULT << std::endl;
	Span sp3 = Span(1);
	try
	{
		sp3.addNumber(6);
		std::cout << sp3 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
