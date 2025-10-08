/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:37:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/07 22:19:38 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "Its run\n" << std::endl;

    ClapTrap def;
    ClapTrap a("Airi");
    ClapTrap b("Borg");
    def = a;

    std::cout << "\n" << std::endl;
    a.attack("Borg");

    std::cout << "\nEnergy Points of " << a.getName()
        << " are " << a.getEnergyPoints() << std::endl;

    std::cout << "\nIts done\n" << std::endl;

    return 0;
}