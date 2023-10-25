/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:14:12 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/25 15:14:18 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/MutantStack.tpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top element = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of mstack = " << mstack.size() << std::endl;
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
	return (0);
}

//int main (void)
//{
//	std::list<int> lst;
//	lst.push_back(5);
//	lst.push_back(17);
//	std::list<int>::iterator it = lst.begin();
//	it++;
//	std::cout << "top element = " << *it << std::endl;
//	lst.pop_back();
//	std::cout << "size of list = " << lst.size() << std::endl;
//	lst.push_back(3);
//	lst.push_back(5);
//	lst.push_back(737);
//	lst.push_back(0);
		
//	it = lst.begin();
//	std::list<int>::iterator ite = lst.end();
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		it++;
//	}
//	return (0);
//}
