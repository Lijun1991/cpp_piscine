/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:10:56 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 15:10:58 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

unsigned int Span::count = 0;

Span::Span(unsigned int N){
	_len = N;
	count = 0;
	std::vector<int> myvector;
}

Span::Span(Span & obj){
	 *this = obj;
}

Span::~Span(void){
}

Span & Span::operator=(Span const & obj){
	this->myvector = obj.myvector;
	this->_len = obj._len;
	return (*this);
}

void Span::addNumber(int nbr){
	if (count > _len)
		throw std::exception();
	myvector.push_back(nbr);
	count++;
}

int Span::shortestSpan(){
	if (count == 1 || count == 0)
		throw std::exception();
	std::sort(myvector.begin(), myvector.end());
	std::vector<int> spans;
	for (int i = 0; i < myvector.size() - 2; i++){
		spans.push_back(myvector[i + 1] - myvector[i]);
	}
	std::sort(spans.begin(), spans.end());
	std::vector<int>::iterator it = spans.begin();
	return (*it);
}

int Span::longestSpan(){
	if (count == 1 || count == 0)
		throw std::exception();
	std::sort(myvector.begin(), myvector.end());
	return (myvector[myvector.size() - 1] - myvector[0]);
}