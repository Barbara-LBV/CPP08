/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:12 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/27 11:54:36 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/MutantStack.tpp"

int main(void)
{
	{
		std::cout << BLUE "******* Stack Test Int *******" DEFAULT << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Top element stack = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size of mstack = " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
			
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << BLUE "******* Stack Test String *******" DEFAULT << std::endl;
		MutantStack<std::string> sstack;
		sstack.push("5");
		sstack.push("17");
		std::cout << "Top element stack = " << sstack.top() << std::endl;
		sstack.pop();
		std::cout << "Size of sstack = " << sstack.size() << std::endl;
		sstack.push("3");
		sstack.push("5");
		sstack.push("737");
		sstack.push("0");
			
		MutantStack<std::string>::iterator it = sstack.begin();
		MutantStack<std::string>::iterator ite = sstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<std::string> ss(sstack);
	}
	std::cout << BLUE "******* List Test *******" DEFAULT << std::endl;
	std::list<int> lst;
 	lst.push_back(5);
 	lst.push_back(17);
 	std::list<int>::iterator it = lst.begin();
 	it++;
 	std::cout << "Top element list = " << *it << std::endl;
 	lst.pop_back();
 	std::cout << "Size of list = " << lst.size() << std::endl;
 	lst.push_back(3);
 	lst.push_back(5);
 	lst.push_back(737);
 	lst.push_back(0);
		
 	it = lst.begin();
 	std::list<int>::iterator ite = lst.end();
 	while (it != ite)
 	{
 		std::cout << *it << std::endl;
 		it++;
 	}
	return (0);
}
