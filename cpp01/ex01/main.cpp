/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:26:54 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 15:31:48 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main(int argc, char const *argv[])
{
    int x = 10;
	Zombie *z = zombieHorde(x,"hasdasd");
    
	delete[] z;
	return 0;
}