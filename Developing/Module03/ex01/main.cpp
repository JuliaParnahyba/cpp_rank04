/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:49:08 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/08 22:58:42 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "Its run\n" << std::endl;

    ScavTrap def;
    std::cout << "\n";
    std::cout << def.getName() << "'s Energy Points are " << def.getEnergyPoints() << std::endl;
    std::cout << def.getName() << "'s Hit Points are " << def.getHitPoints() << std::endl;
    std::cout << def.getName() << "'s Attack Damage are " << def.getAttackDamage() << std::endl;

    std::cout << "\n";
    ScavTrap s("Serena");
    std::cout << "\n";
    std::cout << s.getName() << "'s Energy Points are " << s.getEnergyPoints() << std::endl;
    std::cout << s.getName() << "'s Hit Points are " << s.getHitPoints() << std::endl;
    std::cout << s.getName() << "'s Attack Damage are " << s.getAttackDamage() << std::endl;

    std::cout << "\n";
    ScavTrap c;
    c = s;
    std::cout << "\n";
    std::cout << c.getName() << "'s Energy Points are " << c.getEnergyPoints() << std::endl;
    std::cout << c.getName() << "'s Hit Points are " << c.getHitPoints() << std::endl;
    std::cout << c.getName() << "'s Attack Damage are " << c.getAttackDamage() << std::endl;

    std::cout << "\n";
    ScavTrap clone(def);
    std::cout << "\n";
    std::cout << clone.getName() << "'s Energy Points are " << clone.getEnergyPoints() << std::endl;
    std::cout << clone.getName() << "'s Hit Points are " << clone.getHitPoints() << std::endl;
    std::cout << clone.getName() << "'s Attack Damage are " << clone.getAttackDamage() << std::endl;


    std::cout << "\n-- mutate original --\n";
    s.takeDamage(7);
    s.attack("dummy");
    std::cout << "s: HP=" << s.getHitPoints() << ", EN=" << s.getEnergyPoints() << "\n";
    std::cout << "clone: HP=" << clone.getHitPoints() << ", EN=" << clone.getEnergyPoints() << "\n";

    std::cout << "\n-- mutate clone --\n";
    clone.beRepaired(5);
    clone.attack("dummy");
    std::cout << "s: HP=" << s.getHitPoints() << ", EN=" << s.getEnergyPoints() << "\n";
    std::cout << "clone: HP=" << clone.getHitPoints() << ", EN=" << clone.getEnergyPoints() << "\n";

    std::cout << "\nIt's done\n" << std::endl;

    return 0;
}