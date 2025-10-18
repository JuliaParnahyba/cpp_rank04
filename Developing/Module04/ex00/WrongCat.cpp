/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:44:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:50:27 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// default constructor
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "[WrongCat] default-ctor" << std::endl;
}

// type constructor
WrongCat::WrongCat(const std::string &tp) : WrongAnimal(tp) {
    std::cout << "[WrongCat] type-ctor: " << type << std::endl;
}

// copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    std::cout << "[WrongCat] copy-ctor" << std::endl;
}

// copy assignment
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this != &rhs)
        type = rhs.type;
    std::cout << "[WrongCat] copy-assign" << std::endl;
    return *this;
}

// destructor
WrongCat::~WrongCat() {
    std::cout << "[WrongCat] dtor" << std::endl;;
}

// methods 
void  WrongCat::makeSound() const {
    std::cout << "[WrongCat] * wrong generic sound *" << std::endl;
}
