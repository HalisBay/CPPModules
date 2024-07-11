/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:14:45 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:14:45 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat Default Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat escaped" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Miyav" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}
