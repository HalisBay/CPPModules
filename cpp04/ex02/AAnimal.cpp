/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:42 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:17:42 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
AAnimal::AAnimal() {
    this->type = "AAnimal";
    std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimals escaped" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy) {
    *this = cpy;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    
    this->type = other.type;
    return *this;
}

void AAnimal::makeSound() const {
    std::cout << "There are too many AAnimal sounds " << std::endl;
}

std::string AAnimal::getType() const {
    return this->type;
}