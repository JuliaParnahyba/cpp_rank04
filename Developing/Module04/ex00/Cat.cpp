/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:49:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:23:44 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

// default constructor
Cat::Cat() : Animal("Cat") {
    std::cout << "[Cat] default-ctor" << std::endl; 
}

// copy constructor
Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "[Cat] copy-ctor" << std::endl;
}

// copy assignment
Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs)
        Animal::operator=(rhs);
    std::cout << "[Cat] copy-assign" << std::endl;
    return *this;
}

// destructor
Cat::~Cat() {
    std::cout << "[Cat] dtor" << std::endl;
}                          

// methods/behavior
void Cat::makeSound() const {
    std::cout << "[Cat] Meow!" << std::endl;
}
