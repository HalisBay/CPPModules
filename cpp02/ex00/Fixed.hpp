/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:51:55 by hbay              #+#    #+#             */
/*   Updated: 2024/05/10 13:51:55 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
class Fixed
{
private:
    int _number;
    static int const _stNumber = 8;
public:
    Fixed();
    Fixed(const Fixed &cpy);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
