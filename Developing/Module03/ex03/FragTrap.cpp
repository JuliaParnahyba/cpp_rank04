/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:24:48 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 18:24:49 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30; 
    std::cout << "[FragTrap] default-ctor: " << _name << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30; 
    std::cout << "[FragTrap] name-ctor: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "[FragTrap] copy-ctor: " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    std::cout << "[FragTrap] copy-assign: " << _name << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "[FragTrap] dtor: " << _name << std::endl;
}

// inherit Method
void    FragTrap::attack(const std::string &target) {
    std::cout << "[FragTrap] Preparing to strike like a pro!" << std::endl;
    ClapTrap::attack(target);
    std::cout << "[FragTrap] Attack sequence complete!" << std::endl;
}

// own Method
void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name 
        << " requests high fives! ✋" << std::endl;
}