/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:46:35 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 18:46:50 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <list>
#include "mutantstack.hpp"

int main() 
{
	std::cout << "-------MutantStack version-------" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] 
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
	std::stack <int> s(mstack);


	std::cout << "-------std::list version-------" << std::endl;
	std::list<int> lmstack;

	lmstack.push_back(5);
	lmstack.push_back(17);
	std::cout << lmstack.back() << std::endl;
	std::cout << std::endl;

	lmstack.pop_front();
	std::cout << lmstack.size() << std::endl;
	std::cout << std::endl;

	lmstack.push_back(3);
	lmstack.push_back(5);
	lmstack.push_back(737);
	//[...] 
	lmstack.push_back(0);

	std::list<int>::iterator lit = lmstack.begin();
	std::list<int>::iterator lite = lmstack.end();

	++lit;
	--lit;
	while (lit != lite) 
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list <int> l_s(lmstack);

	return 0;
}
