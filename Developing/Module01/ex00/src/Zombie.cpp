/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:23:40 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/12 22:14:25 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("nameless")
{
    // friendly name: nameless
    std::cout << "unused " << this->_name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed" << std::endl;
}

Zombie::Zombie(const std::string &name) : _name(name)
{
    // corpo vazio
    std::cout << "input name: " << this->_name << std::endl;
}

void    Zombie::announce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
