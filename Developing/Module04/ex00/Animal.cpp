/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:30:06 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:30:14 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// default constructor
Animal::Animal() : type("Animal") {
    std::cout << "[Animal] default-ctor: " << type << std::endl; 
}

// constructor named
Animal::Animal(const std::string &tp) : type(tp) {
    std::cout << "[Animal] type-ctor: " << type << std::endl;
}

// copy constructor
Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "[Animal] copy-ctor: " << type << std::endl;
}

// copy assignment
Animal &Animal::operator=(const Animal &rhs) {
    if (this != &rhs)
        this->type = rhs.type;
    std::cout << "[Animal] copy-assign: " << type << std::endl;

    return *this;
}

// destructor
Animal::~Animal() {
    std::cout << "[Animal] dtor: " << type << std::endl;
}                          

// methods 
void Animal::makeSound() const {
    std::cout << "[Animal] * generic animal sound *" << std::endl;
}

// getter for tests
const std::string &Animal::getType() const { return this->type; }