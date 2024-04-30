/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:27 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 10:36:27 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

 Contact::Contact() {}

    Contact::Contact(std::string _name, std::string _surname, std::string _nickname, std::string _phoneNumber, std::string _darkestSecret)
        : name(_name), surname(_surname), nickname(_nickname), phoneNumber(_phoneNumber), darkestSecret(_darkestSecret) {}

    Contact::~Contact() {}

    std::string Contact::getName() const {
        return name;
    }

    std::string Contact::getSurname() const {
        return surname;
    }

    std::string Contact::getNickname() const {
        return nickname;
    }

    std::string Contact::getPhoneNumber() const {
        return phoneNumber;
    }

    std::string Contact::getDarkestSecret() const {
        return darkestSecret;
    }

    void Contact::displayContact() const {
        std::cout << std::setw(10) << std::left << (name.length() > 10 ? name.substr(0, 9) + "." : name);
        std::cout << " | ";
        std::cout << std::setw(10) << std::left << (surname.length() > 10 ? surname.substr(0, 9) + "." : surname);
        std::cout << "| ";
        std::cout << std::setw(10) << std::left << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname);
        std::cout << "\n";
    }

