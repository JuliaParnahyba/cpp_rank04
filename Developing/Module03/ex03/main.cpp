/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:25:05 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 20:07:07 by jparnahy         ###   ########.fr       */
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
    std::cout << "---------------------------\n";
    {
        std::cout << "        CONSTRUCTOR\n";
        ScavTrap def;
        std::cout << "\n";
        std::cout << def.getName() << "'s Energy Points are " << def.getEnergyPoints() << std::endl;
        std::cout << def.getName() << "'s Hit Points are " << def.getHitPoints() << std::endl;
        std::cout << def.getName() << "'s Attack Damage are " << def.getAttackDamage() << std::endl;
        std::cout << "\n";
        std::cout << "        ATTACK\n";
        def.attack("OWN");
        std::cout << "\n";
        std::cout << def.getName() << "'s Energy Points are " << def.getEnergyPoints() << std::endl;
        std::cout << def.getName() << "'s Hit Points are " << def.getHitPoints() << std::endl;
        std::cout << def.getName() << "'s Attack Damage are " << def.getAttackDamage() << std::endl;
        std::cout << "\n";
        def.guardGate();
        std::cout << "\n";
        std::cout << "         DISTRUCTOR\n";
    }
    
    std::cout << "---------------------------\n\n";

    std::cout << "\n---------------------------\n";
    std::cout << "         FRAGTRAP\n";
    std::cout << "---------------------------\n";
    {
        FragTrap s("Serena");
        std::cout << "\n";
        std::cout << s.getName() << "'s Energy Points are " << s.getEnergyPoints() << std::endl;
        std::cout << s.getName() << "'s Hit Points are " << s.getHitPoints() << std::endl;
        std::cout << s.getName() << "'s Attack Damage are " << s.getAttackDamage() << std::endl;
        std::cout << "\n";
        std::cout << "        ATTACK\n";
        s.attack("OWN");
        std::cout << "\n";
        std::cout << s.getName() << "'s Energy Points are " << s.getEnergyPoints() << std::endl;
        std::cout << s.getName() << "'s Hit Points are " << s.getHitPoints() << std::endl;
        std::cout << s.getName() << "'s Attack Damage are " << s.getAttackDamage() << std::endl;
        std::cout << "\n";
        s.highFivesGuys();
        std::cout << "\n";
        std::cout << "         DISTRUCTOR\n";
    }

    std::cout << "---------------------------\n\n";

    std::cout << "\n---------------------------\n";
    std::cout << "         DIAMONDTRAP\n";
    std::cout << "---------------------------\n";
    {
        DiamondTrap c("Dias");
        std::cout << "\n";
        std::cout << c.getName() << "'s Energy Points are " << c.getEnergyPoints() << std::endl;
        std::cout << c.getName() << "'s Hit Points are " << c.getHitPoints() << std::endl;
        std::cout << c.getName() << "'s Attack Damage are " << c.getAttackDamage() << std::endl;
        std::cout << "\n";
        std::cout << "        ATTACK\n";
        c.attack("OWN");
        std::cout << "\n";
        std::cout << c.getName() << "'s Energy Points are " << c.getEnergyPoints() << std::endl;
        std::cout << c.getName() << "'s Hit Points are " << c.getHitPoints() << std::endl;
        std::cout << c.getName() << "'s Attack Damage are " << c.getAttackDamage() << std::endl;
        std::cout << "\n";
        c.whoAmI();
        std::cout << "\n";
        std::cout << "         DISTRUCTOR\n";
    }

    {
        std::cout << "\n---------------------------\n";
        std::cout << "  TEST: ENERGY DEPLETION\n";
        std::cout << "---------------------------\n";

        DiamondTrap tired("Tired");
        std::cout << "\n";
        for (int i = 0; i < 51; ++i) {  // força energia a zerar e tentar mais um ataque
            tired.attack("Dummy");
        }
        std::cout << "Final Energy Points: " << tired.getEnergyPoints() << std::endl;
        
        std::cout << "\n";
        std::cout << "         DISTRUCTOR\n";
    }

    {
        std::cout << "\n---------------------------\n";
        std::cout << "  TEST: NO HIT POINTS\n";
        std::cout << "---------------------------\n";

        DiamondTrap broken("Broken");
        std::cout << "\n";
        broken.takeDamage(999);   // HP → 0
        broken.attack("Ghost");   // deve recusar
        broken.beRepaired(10);    // deve recusar também
        std::cout << "Final HP: " << broken.getHitPoints()
                << ", Energy: " << broken.getEnergyPoints() << std::endl;
        
        std::cout << "\n";
        std::cout << "         DISTRUCTOR\n";
    }

    std::cout << "---------------------------\n";
    std::cout << "\nIt's done\n" << std::endl;

    return 0;
}