/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:16:14 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:16:14 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    *this = cpy;
}

Brain &Brain::operator=(const Brain &other)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] =  other.ideas[i];
    }

	return (*this);
}

std::string Brain::getIdeas() const
{
    std::string allIdeas;
    for (size_t i = 0; i < 100; i++)
    {
        allIdeas += this->ideas[i];
    }
    return allIdeas;
}

void Brain::setIdeas(std::string idea)
{
    size_t count = idea.length() + 1;

    if (count > 100)
    {
        std::cout << "THISSS ISSS VERYYY BIGGG IDEAAA!!!,ok i will just take 100 letters (★‿★)"<< std::endl;
        count = 100;
    }
    for (size_t i = 0; i < count; i++)
    {
        this->ideas[i] = idea[i];
    }
    
}
