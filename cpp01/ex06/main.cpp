/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:27:42 by hbay              #+#    #+#             */
/*   Updated: 2024/05/04 14:52:55 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main(int argc, char const *argv[])
{
	if(argc == 2)
	{
		Harl harl;
		std::string level;
		level = argv[1];
		harl.complain(level);
		return 0;
	}
}
