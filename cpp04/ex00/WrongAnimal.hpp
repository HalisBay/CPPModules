/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:14:40 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:14:40 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &cpy);
    WrongAnimal &operator=(const WrongAnimal &other);

    void makeSound() const;
    std::string getType() const;
};
