/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:43:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/20 22:27:26 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::endl
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main() {
    std::cout << "Its run...\n" << std::endl;

    Weapon wA("crude spiked club"); // Objeto instanciado e construtor
    std::cout << "wA is " << wA.getType() << std::endl; // o método devolve uma referência constante
    wA.setType("some other type of club"); // invoca setType(), que passa novo valor para type
    std::cout << "the new value of wA: " << wA.getType() << std::endl;

    std::cout << std::endl;

    Weapon wB("some other type of club");
    std::cout << "wB is " << wB.getType() << std::endl;
    wB.setType("crud spiked club");
    std::cout << "the new value of wB: " << wB.getType() << std::endl;

    std::cout << std::endl;
    
    HumanA a("Julia", wA);
    a.attack();

    HumanB b("Fabi");
    b.setWeapon(wB);
    b.attack();

    return 0;
}