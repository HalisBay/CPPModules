/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:36:55 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 10:36:57 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <limits> 

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    size_t index;
public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact() const;
};
#endif