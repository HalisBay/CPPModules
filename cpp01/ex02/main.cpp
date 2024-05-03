/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:10:34 by hbay              #+#    #+#             */
/*   Updated: 2024/05/01 15:10:34 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int argc, char const *argv[])
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPointer;

    strPointer =&str;
    std::string &strReference = str;

    std::cout<< "str's address: " << &str << std::endl;
    std::cout<< "strPointer's address: " << strPointer << std::endl;
    std::cout<< "strReference's address: " << &strReference << std::endl;
    std::cout<< "strReference's value: " << strReference << std::endl;
    std::cout<< "strPointer's value: " << *strPointer << std::endl;

    return 0;
}
