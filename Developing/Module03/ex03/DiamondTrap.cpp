/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:37:03 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 20:10:11 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("NoName_clap_name"), FragTrap("NoName"), ScavTrap("NoName") { 
    _name = "NoName";
    _hitPoints = 100;   // from FragTrap   
    _energyPoints = 50; // from ScavTrap
    _attackDamage = 30; // from FragTrap
    std::cout << "[DiamondTrap] default-ctor: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
    _name = name;       // name from own DiamondTrap
    _hitPoints = 100;   // from FragTrap   
    _energyPoints = 50; // from ScavTrap
    _attackDamage = 30; // from FragTrap
    std::cout << "[DiamondTrap] name-ctor: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
: ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
    //_name = other._name;
    std::cout << "[Diamond] copy-ctor: " << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    ScavTrap::operator=(rhs);
    FragTrap::operator=(rhs);

    if (this != &rhs)
        _name = rhs._name;
    std::cout << "[DiamondTrap] copy-assign: " << _name << std::endl;
    
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "[DiamondTrap] dtor: " << _name << std::endl;
}

// public methods
void    DiamondTrap::attack(const std::string &target) {
    std::cout << "[DiamondTrap] Preparing to strike like a pro!" << std::endl;
    ScavTrap::attack(target);
    std::cout << "[DiamondTrap] Attack sequence complete!" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "I am " << this->_name << ", and my ClapTrap name is "
        << ClapTrap::getName() << std::endl;
}

// getter
const std::string   &DiamondTrap::getName() const { return this->_name; }