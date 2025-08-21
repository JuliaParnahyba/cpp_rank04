/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:43:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/20 22:04:38 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::endl
#include "Weapon.hpp"
#include "HumanA.hpp"


int main() {
    std::cout << "Its run...\n" << std::endl;

    Weapon w("crude spiked club"); // Objeto instanciado e construtor
    std::cout << w.getType() << std::endl; // o método devolve uma referência constante
    
    w.setType("some other type of club\n"); // invoca setType(), que passa novo valor para type
    std::cout << w.getType() << std::endl;

    HumanA a("Julia", w);
    a.attack();

    return 0;
}