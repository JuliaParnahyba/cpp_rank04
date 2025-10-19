/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:28:26 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/18 21:28:27 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

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

// destructor
WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] dtor" << std::endl;;
}

// methods 
void  WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] * wrong generic sound *" << std::endl;
}

// getter for tests
const std::string   &WrongAnimal::getType() const { return this->type; }