/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:18:11 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:18:11 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <string>

int main() {

    // AAnimal* animal = new AAnimal();
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << std::endl;
    std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
    std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
    cat->makeSound(); // will output "Miyav"
    dog->makeSound(); // will output "hav hav"

    std::cout << std::endl;

    delete dog;
    delete cat;
    return 0;
}
