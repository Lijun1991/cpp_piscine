/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:11:05 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 15:11:07 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <sort>

class Span
{
  private:
    std::vector<int> myvector;
    unsigned int _len;

  public:
  	static unsigned int count;
    Span(unsigned int N);
    Span(std::vector<int> & obj);
    ~Span(void);
    Span & operator=(Span const & obj);

    void addNumber(int nbr);
    int shortestSpan();
    int longestSpan();
};

#endif


