/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:35:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:34:55 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

// default constructor
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "[WrongAnimal] default-ctor" << std::endl;
}

// type constructor
WrongAnimal::WrongAnimal(const std::string &tp) : type(tp) {
    std::cout << "[WrongAnimal] type-ctor: " << type << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
    std::cout << "[WrongAnimal] copy-ctor" << std::endl;
}

// copy assignment
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this != &rhs)
        type = rhs.type;
    std::cout << "[WrongAnimal] copy-assign" << std::endl;
    return *this;
}

// destructor (intentionally non-virtual)
WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] dtor" << std::endl;;
}

// methods / behavior (no virtual)
void  WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] * wrong generic sound *" << std::endl;
}

// getter for tests/accessor
const std::string   &WrongAnimal::getType() const { return this->type; }