
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:27:38 by hbay              #+#    #+#             */
/*   Updated: 2024/05/04 12:27:39 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl says: Hello" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl says : Goodbye " << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				<<"enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl;
}



void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				<<"years whereas you started working here since last month."
			<< std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
}

void Harl::complain(std::string level)
{
	std::size_t num = 0;
	std::string cases=("DEBUG INFO WARNING ERROR");
	num = cases.find(level);

	switch (num) {
        case 0:
            funcPtr = &Harl::debug;
            break;
        case 6:
            funcPtr = &Harl::info;
            break;
	    case 11:
            funcPtr = &Harl::warning;
            break;
		case 19:
            funcPtr = &Harl::error;
            break;
        default:
           std::cerr << "you entered an unknown level" << std::endl;
		   return;
    }
	if (funcPtr != NULL)
        (this->*funcPtr)();
}
