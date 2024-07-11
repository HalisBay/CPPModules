/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:49 by hbay              #+#    #+#             */
/*   Updated: 2024/05/07 13:49:18 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


 PhoneBook::PhoneBook()
    {
        contactCount = 0;
        index = 0; 
    }

    PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
    if (index >= 8)
        index = 0;

    std::string name, surname, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter name:";
    if (!std::getline(std::cin, name) || name.empty()) {
        std::cerr << "Error: Invalid or empty input for name" << std::endl;
        return;
    }

    std::cout << "Enter surname: ";
    if (!std::getline(std::cin, surname) || surname.empty()) {
        std::cerr << "Error: Invalid or empty input for surname" << std::endl;
        return;
    }

    std::cout << "Enter nickname: ";
    if (!std::getline(std::cin, nickname) || nickname.empty()) {
        std::cerr << "Error: Invalid or empty input for nickname" << std::endl;
        return;
    }

    std::cout << "Enter phone number: ";
    if (!std::getline(std::cin, phoneNumber) || phoneNumber.empty()) {
        std::cerr << "Error: Invalid or empty input for phone number" << std::endl;
        return;
    }

    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, darkestSecret) || darkestSecret.empty()) {
        std::cerr << "Error: Invalid or empty input for darkest secret" << std::endl;
        return;
    }

    contacts[index] = Contact(name, surname, nickname, phoneNumber, darkestSecret);
    if (contactCount < 8)
        contactCount++;
    index++;
    std::cout << "Contact added successfully!" << std::endl;
}

    void PhoneBook::searchContact() const {
        if (contactCount == 0) {
            std::cout << "Contacts is empty" << std::endl;
            return;
        }

        std::cout << std::setw(1) << "Index | ";
        std::cout << std::setw(10) << "First Name | ";
        std::cout << std::setw(10) << "Last Name | ";
        std::cout << std::setw(10) << "Nickname\n";
        std::cout << "------------------------------------------\n";
        
        for (int i = 0; i < contactCount; ++i) {
            std::cout << std::setw(5) << std::left << i + 1 << " | ";
            contacts[i].displayContact();
        }

        std::string number2;
    
        std::cout << "Enter a number: ";
        std::getline(std::cin, number2);
     
        if (std::cin.eof())
            return ;
     
        int number = atoi(number2.c_str());
            if ((number < 0 && number > contactCount)) {
            std::cout << "Invalid input" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }

        number--;

        if (number >= 0 && number < contactCount) {
            std::cout << "------------------------------------------\n"
                        "Name: " << contacts[number].getName() << "\n"
                        "Surname: " << contacts[number].getSurname() << "\n"
                        "Nickname: " << contacts[number].getNickname() << "\n"
                        "Phone number: " << contacts[number].getPhoneNumber() << "\n"
                        "Darkest Secret: " << contacts[number].getDarkestSecret() << "\n"
                        "------------------------------------------" << std::endl;
        } else {
            std::cout << "Invalid index" << std::endl;
        }
        return;
    }