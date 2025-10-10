/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:58:15 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/09 22:02:24 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20; 
    std::cout << "[ScavTrap] default-ctor: " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20; 
    std::cout << "[ScavTrap] name-ctor: " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "[ScavTrap] copy-ctor: " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    std::cout << "[ScavTrap] copy-assign: " << _name << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] dtor: " << _name << std::endl;
}

// inherit Method
void    ScavTrap::attack(const std::string &target) {
    std::cout << "[ScavTrap] Preparing to strike like a pro!" << std::endl;
    ClapTrap::attack(target);
    std::cout << "[ScavTrap] Attack sequence complete!" << std::endl;
}

// own Method
void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name 
        << " is now in Gate keeper mode." << std::endl;
}