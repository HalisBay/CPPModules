/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:27:40 by hbay              #+#    #+#             */
/*   Updated: 2024/05/04 14:26:19 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void (Harl::*funcPtr)();
public:
	Harl();
	~Harl();
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void complain( std::string level );
};
