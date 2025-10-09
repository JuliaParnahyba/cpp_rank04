/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:37:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/08 21:21:23 by jparnahy         ###   ########.fr       */
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
    std::cout << "Attacks from " << a.getName() << std::endl;
    a.attack("Borg");
    std::cout << "\n";
    std::cout << a.getName() << "'s Energy Points are " << a.getEnergyPoints() << std::endl;
    std::cout << a.getName() << "'s Hit Points are " << a.getHitPoints() << std::endl;
    std::cout << a.getName() << "'s Attack Damage are " << a.getAttackDamage() << std::endl;

    std::cout << "\n";
    std::cout << a.getName() << " Being repaired " << std::endl;
    a.beRepaired(9);
    std::cout << "\n";
    std::cout << a.getName() << "'s Energy Points are " << a.getEnergyPoints() << std::endl;
    std::cout << a.getName() << "'s Hit Points are " << a.getHitPoints() << std::endl;
    std::cout << a.getName() << "'s Attack Damage are " << a.getAttackDamage() << std::endl;
    
    std::cout << "\n";
    std::cout << b.getName() << " Taking damage " << std::endl;
    b.takeDamage(999);
    std::cout << "\n";
    std::cout << b.getName() << "'s Energy Points are " << b.getEnergyPoints() << std::endl;
    std::cout << b.getName() << "'s Hit Points are " << b.getHitPoints() << std::endl;
    std::cout << b.getName() << "'s Attack Damage are " << b.getAttackDamage() << std::endl;

    std::cout << "\n";
    std::cout << b.getName() << " Being repaired " << std::endl;
    b.beRepaired(9);
    std::cout << "\n";
    std::cout << b.getName() << "'s Energy Points are " << b.getEnergyPoints() << std::endl;
    std::cout << b.getName() << "'s Hit Points are " << b.getHitPoints() << std::endl;
    std::cout << b.getName() << "'s Attack Damage are " << b.getAttackDamage() << std::endl;

    std::cout << "\nIt's done\n" << std::endl;

    return 0;
}