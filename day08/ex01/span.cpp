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

unsigned int Span::count = 0;

Span::Span(unsigned int N){
	_len = N;
	count = 0;
	myvector = new int[N];
}

Span::Span(std::vector<int> & obj){
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
	if (count == 1 || !myvector)
		throw std::exception();
	std::sort(myvector.begin(), myvector.end());
	return ( myvector[1] - myvector[0]);
}

int Span::longestSpan(){
	if (count == 1 || !myvector)
		throw std::exception();
	std::sort(myvector.begin(), myvector.end());
	return (myvector[myvector.size() - 1] - myvector[0]);
}