/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:16:28 by hbay              #+#    #+#             */
/*   Updated: 2024/05/13 12:16:28 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_number = 0;
}

Fixed::Fixed(int number)
{
    this->_number = number << _stNumber;
}

Fixed::Fixed(float number)
{
    this->_number = static_cast<int>(roundf(number * (1 << _stNumber)));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &cpy) {
    *this = cpy;
}

Fixed & Fixed::operator=(const Fixed & other)
{
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

bool Fixed::operator>(const Fixed& other) const {
    return this->_number > other._number;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->_number < other._number;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_number == other._number;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->_number != other._number;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->_number >= other._number;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->_number <= other._number;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(toFloat() / other.toFloat());
}

Fixed Fixed::operator++()
{
    ++_number;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed Fixed::operator--()
{
    --_number;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
    return (num1 <= num2 ? num1 : num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
    return (num1 <= num2 ? num1 : num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
    return (num1 >= num2 ? num1 : num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
    return (num1 >= num2 ? num1 : num2);
}
