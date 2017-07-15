/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:11:15 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 15:11:17 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>    
#include <vector>     
#include "span.hpp"

int main() 
{
	std::cout << "----test shortest/Longest Span-----" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "------------test error1------------" << std::endl;

	try{
		Span sp2 = Span(5);
		std::cout <<  "Longest Span: " << sp2.longestSpan() << std::endl;
		std::cout <<  "Shortest Span: " << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}	

	std::cout << "------------test error2------------" << std::endl;

	try{
		Span sp2 = Span(5);
		sp.addNumber(3);
		std::cout <<  "Longest Span: " << sp2.longestSpan() << std::endl;
		std::cout <<  "Shortest Span: " << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}	
}
