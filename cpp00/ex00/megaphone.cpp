/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:25:43 by hbay              #+#    #+#             */
/*   Updated: 2024/04/22 11:03:15 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        for (int i = 1; i < argc; i++)
        {
            int j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] != '"')
                    std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}