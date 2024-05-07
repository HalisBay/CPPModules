/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:42 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 10:36:42 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;
    while (true) {
        std::string command;
        std::cout << "Enter a command : ";
        std::getline(std::cin, command);
	    std::cin.eof();
        // for (size_t i = 0; i < command.length(); i++) {
        //     command[i] = std::toupper(command[i]);
        // }
        if (command.compare("EXIT") == 0) {
            std::cout << "Exiting program" << std::endl;
            break;
        } else if (command.compare("ADD") == 0) {
            phoneBook.addContact();
        } else if (command.compare("SEARCH") == 0) {
            phoneBook.searchContact();
        } else {
             std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}
