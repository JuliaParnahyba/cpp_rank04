/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:23:40 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 12:34:04 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("nameless") { /*body clean*/ }

Zombie::Zombie(const std::string &name) : _name(name) { /*body clean*/ }

void    Zombie::announce() const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << this->_name << " is destroyed" << std::endl;
}
