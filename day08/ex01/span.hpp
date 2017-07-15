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

class Span
{
  private:
    std::vector<int> myvector;
    unsigned int _len;
    unsigned int count;

  public:
    Span(void);
    Span(unsigned int N);
    Span(Span const & obj);
    ~Span(void);
    Span & operator=(Span const & obj);

    void addNumber(int nbr);
    int shortestSpan();
    int longestSpan();
};

#endif


