/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:27:42 by hbay              #+#    #+#             */
/*   Updated: 2024/05/04 14:21:48 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char const *argv[])
{
	Harl harl;
	std::string level;
	std::cout << "enter a level (like as 'WARNING') : ";
	std::cin >> level;
	harl.complain(level);
	return 0;
}
