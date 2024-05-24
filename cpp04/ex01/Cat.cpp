/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:16:22 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:16:22 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
    this->catBrain = new Brain();
	if (this->catBrain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Cat::~Cat() {
    delete this->catBrain;
    std::cout << "Cat escaped" << std::endl;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
    this->catBrain = new Brain();
	if (this->catBrain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->catBrain = *other.catBrain;
	return *this;
}

void Cat::makeSound() const {
    std::cout << "Miyav" << std::endl;
}

std::string Cat::getType() const {
    return this->type;
}
void	Cat::getIdeas(void)const
{
		std::cout << "Idea of the Cat is: \"" << this->catBrain->getIdeas()<< std::endl;
}

void	Cat::setIdeas(std::string idea)
{
		this->catBrain->setIdeas(idea);
}