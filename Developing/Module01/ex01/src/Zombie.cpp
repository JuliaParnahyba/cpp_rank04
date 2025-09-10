/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:23:40 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 21:23:22 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default ctor
// Class::Class() : member(init)
Zombie::Zombie() : _name("nameless") { /*body clean*/ }

// Named ctor
Zombie::Zombie(const std::string &name) : _name(name) { /*body clean*/ }

// Destructor
Zombie::~Zombie() {
#ifdef DEBUG_MODE
    std::cout << this->_name << " is destroyed" << std::endl;
#endif
}

void    Zombie::announce() const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(const std::string &name) {
    this->_name = name;
}

