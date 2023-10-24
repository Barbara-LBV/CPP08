/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:02 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/24 16:55:15 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Span.hpp"

int main()
{
	try
	{
		std::cout << RED "******* Manual array filling *******" DEFAULT << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(25);
		std::cout << sp << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << RED "******* Automatic array filling*******" DEFAULT << std::endl;
		Span sp2 = Span(1000);
		sp2.addMultipleNb();
		//sp2.addNumber(25);
		std::cout << sp2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << RED "******* Manual array filling *******" DEFAULT << std::endl;
		Span sp3 = Span(1);
		sp3.addNumber(6);
		sp3.addNumber(3);
		sp3.addNumber(17);
		sp3.addNumber(9);
		sp3.addNumber(11);
		//sp.addNumber(25);
		std::cout << sp3 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
