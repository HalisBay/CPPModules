/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:08 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:17:08 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdio> 
#include <cstdlib>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &cpy);
    AAnimal &operator=(const AAnimal &other);

    virtual void makeSound() const = 0;
    virtual std::string getType() const;
};