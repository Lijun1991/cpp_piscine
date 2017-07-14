/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:33:50 by lwang             #+#    #+#             */
/*   Updated: 2017/07/13 10:33:52 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        // Array of ints
        Array<int> intArray(5); 
        for (int i = 0; i < 5; i++){
            intArray[i] = i;
        }
        std::cout << intArray[4] << std::endl;

        // Array of strings
        Array<std::string> stringArray(4); 
        stringArray[0] = "hello";
        stringArray[1] = "hello1";
        stringArray[2] = "hello2";
        stringArray[3] = "hello3";
        std::cout << stringArray[0] << std::endl;
    }
    catch (std::exception const &ex) {
        std::cout << ex.what() << std::endl;
        return -1;
    }
}
