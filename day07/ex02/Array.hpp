/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:33:07 by lwang             #+#    #+#             */
/*   Updated: 2017/07/13 10:33:09 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <class T>
class Array
{
  private:
    T * _array;
    unsigned int _len;

  public:
    Array(void){
    	_len = 0;
    	_array = NULL;
    }
    Array(unsigned int n){
    	_len = n;
    	_array = new T[n];
    }
    Array(T & obj){
    	 *this = obj;
    }
    ~Array(void){
    }

    Array & operator=(Array const & obj){
    	this->_array = obj._array;
    	this->_len = obj._len;
    	return (*this);
    }
    T & operator[](unsigned int i){
    	if (i < _len)
    		return (_array[i]);
    	else
    		throw std::exception();
    }

    int size(void){
    	return (_len);
    }
};


#endif