/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:25:05 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 18:45:41 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "Its run\n" << std::endl;
    
    ScavTrap def;
    FragTrap s("Serena");
    
    std::cout << "\nIt's done\n" << std::endl;

    return 0;
}