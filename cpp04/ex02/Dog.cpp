/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:18:03 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:18:03 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
    this->dogBrain = new Brain();
	if (this->dogBrain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Dog::~Dog() {
    delete this->dogBrain;
    std::cout << "Dog escaped" << std::endl;
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog &Dog::operator=(const Dog &other) {
    this->type = other.type;
    return *this;
    this->dogBrain = new Brain();
	if (this->dogBrain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->dogBrain = *other.dogBrain;
	return *this;
}

void Dog::makeSound() const {
    std::cout << "hav hav" << std::endl;
}

std::string Dog::getType() const {
    return this->type;
}
void	Dog::getIdeas(void)const
{
	std::cout << "Idea of the Dog is: \"" << this->dogBrain->getIdeas() << std::endl;
}

void	Dog::setIdeas(std::string idea)
{
		this->dogBrain->setIdeas(idea);
}