/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:42:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:35:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// default constructor
Dog::Dog() : Animal("Dog") {
    std::cout << "[Dog] default-ctor" << std::endl; 
}

// constructor named
Dog::Dog(const std::string &tp) : Animal(tp) {
    std::cout << "[Dog] type-ctor" << std::endl;
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

// methods 
void Dog::makeSound() const {
    std::cout << "[Dog] The sound of " << this->type << " is Au Au!" << std::endl;
}
