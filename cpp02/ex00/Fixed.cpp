/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:51:46 by hbay              #+#    #+#             */
/*   Updated: 2024/05/10 13:51:46 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_number = 0;
}

Fixed::Fixed(const Fixed &cpy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed & Fixed::operator=(const Fixed & other)
{
    std::cout << "Copy Assignment operator called" << std::endl;
    setRawBits(other.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return this->_number;
}

void Fixed::setRawBits(int const raw)
{
    this->_number = raw;
}