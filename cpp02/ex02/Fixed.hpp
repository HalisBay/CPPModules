/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:16:25 by hbay              #+#    #+#             */
/*   Updated: 2024/05/13 12:16:25 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _number;
    static int const _stNumber = 8;

public:
    Fixed(); 
    Fixed(int number);
    Fixed(float number);
    ~Fixed();
    Fixed(const Fixed &cpy);
    Fixed& operator=(const Fixed& other);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed &min(Fixed &num1, Fixed &num2);
    static const Fixed &min(const Fixed &num1,const Fixed &num2);
    static Fixed &max(Fixed &num1, Fixed &num2);
    static const Fixed &max(const Fixed &num1,const Fixed &num2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);

#endif
