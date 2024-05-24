/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:22 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:17:22 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
    Brain *catBrain;
public:
    Cat();
    ~Cat();
    Cat(const Cat &cpy);
    Cat &operator=(const Cat &other);

    void makeSound() const;
    std::string getType() const;
    void getIdeas(void)const;
	void setIdeas( std::string idea);
};