/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:08:36 by hbay              #+#    #+#             */
/*   Updated: 2024/05/10 15:08:36 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_number = 0;
}
Fixed::Fixed(int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->_number = number << _stNumber;
}

Fixed::Fixed(float number)
{
    std::cout << "Float constructor called" << std::endl;
    this->_number = static_cast<int>(roundf(number * (1 << _stNumber)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_number) / (1 << this->_stNumber);
}

int Fixed::toInt(void) const
{
    return this->_number >> this->_stNumber;
}

int Fixed::getRawBits(void) const
{
    return this->_number;
}

void Fixed::setRawBits(int const raw)
{
    this->_number = raw;
}

std::ostream & operator<<(std::ostream & os, const Fixed & fi)
{
    os << fi.toFloat();
    return os;
}
