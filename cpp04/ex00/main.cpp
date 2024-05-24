/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:14:31 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:14:31 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    Animal* animal = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
    std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
    cat->makeSound(); // will output "Miyav"
    dog->makeSound(); // will output "hav hav"
    animal->makeSound(); // will output "There are too many animal sounds"

    std::cout << std::endl;

    delete animal;
    delete dog;
    delete cat;

    std::cout << std::endl;

    WrongAnimal* wrongAnimal = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl;
    std::cout << "Wrong Cat->getType [" << wrongCat->getType() << "] " << std::endl;
    wrongCat->makeSound(); // will output "Miyav"
    wrongAnimal->makeSound(); // will output "There are too many wrong animal sounds"

    std::cout << std::endl;

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}
