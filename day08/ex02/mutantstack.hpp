/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:46:26 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 18:46:27 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
  private:
    std::list<int> _myList;
    std::stack<int> _myStack;

  public:
    MutantStack(void){}
    MutantStack(MutantStack & obj){
    	*this = obj;
    }
    ~MutantStack(void){}
    MutantStack & operator=(MutantStack const & obj){
    	this->_myList = obj._myList;
    	this->_myStack = obj._myStack;
    }

    void push(int i){
    	_myStack.push(i);
    	_myList.push_back(i);
    }

    int top(void){
    	return (_myStack.top());
    }

    void pop(void){
    	_myStack.pop();
    	_myList.pop_front();
    }

    int size(void){
    	return (_myStack.size());
    }

	typedef std::list<int>::iterator iterator;
    iterator begin(void){
    	return (_myList.begin());
    }

    iterator end(void){
    	return (_myList.end());
    }
};

#endif
