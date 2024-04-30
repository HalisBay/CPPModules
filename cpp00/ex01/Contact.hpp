/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:12:44 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 10:20:42 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
   private:
       std::string name;
       std::string surname;
       std::string nickname;
       std::string phoneNumber;
       std::string darkestSecret;
   public:
       Contact();
       Contact( std::string _name,  std::string _surname,  std::string _nickname,
                   std::string _phoneNumber,  std::string _darkestSecret);
       void displayContact() const;
       ~Contact();
       std::string getName() const;
       std::string getSurname() const;
       std::string getNickname() const;
       std::string getPhoneNumber() const;
       std::string getDarkestSecret() const;
};
#endif