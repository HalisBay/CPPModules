/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:08:35 by hbay              #+#    #+#             */
/*   Updated: 2024/05/10 15:08:35 by hbay             ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);

#endif