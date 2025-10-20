/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:42:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:29:17 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

// default constructor
Dog::Dog() : Animal("Dog") {
    std::cout << "[Dog] default-ctor" << std::endl; 
}

// copy constructor
Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "[Dog] copy-ctor" << std::endl;
}

// copy assignment
Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs)
        Animal::operator=(rhs);
    std::cout << "[Dog] copy-assign" << std::endl;
    return *this;
}

// destructor
Dog::~Dog() {
    std::cout << "[Dog] dtor" << std::endl;
}                          

// methods / behavior
void Dog::makeSound() const {
    std::cout << "[Dog] Woof!" << std::endl;
}
