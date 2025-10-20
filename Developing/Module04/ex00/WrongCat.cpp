/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:44:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:38:52 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

// default constructor
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "[WrongCat] default-ctor" << std::endl;
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

// destructor (non-virtual)
WrongCat::~WrongCat() {
    std::cout << "[WrongCat] dtor" << std::endl;
}

// methods 
void  WrongCat::makeSound() const {
    std::cout << "[WrongCat] * wrong meow *" << std::endl;
}
