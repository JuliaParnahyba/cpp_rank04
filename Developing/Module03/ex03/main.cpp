/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:25:05 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 19:29:22 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    std::cout << "Its run\n" << std::endl;
    
    std::cout << "---------------------------\n";
    std::cout << "         SCAVTRAP\n";
    ScavTrap def;
    std::cout << "\n";
    std::cout << def.getName() << "'s Energy Points are " << def.getEnergyPoints() << std::endl;
    std::cout << def.getName() << "'s Hit Points are " << def.getHitPoints() << std::endl;
    std::cout << def.getName() << "'s Attack Damage are " << def.getAttackDamage() << std::endl;
    std::cout << "\n";

    std::cout << "---------------------------\n";
    std::cout << "         FRAGTRAP\n";
    FragTrap s("Serena");
    std::cout << "\n";
    std::cout << s.getName() << "'s Energy Points are " << s.getEnergyPoints() << std::endl;
    std::cout << s.getName() << "'s Hit Points are " << s.getHitPoints() << std::endl;
    std::cout << s.getName() << "'s Attack Damage are " << s.getAttackDamage() << std::endl;
    std::cout << "\n";

    std::cout << "---------------------------\n";
    std::cout << "         DIAMONDTRAP\n";
    DiamondTrap c("Dias");
    std::cout << "\n";
    std::cout << c.getName() << "'s Energy Points are " << c.getEnergyPoints() << std::endl;
    std::cout << c.getName() << "'s Hit Points are " << c.getHitPoints() << std::endl;
    std::cout << c.getName() << "'s Attack Damage are " << c.getAttackDamage() << std::endl;
    std::cout << "\n";
    
    std::cout << "\nIt's done\n" << std::endl;

    std::cout << "---------------------------\n";
    std::cout << "         DISTRUCTOR\n";

    return 0;
}