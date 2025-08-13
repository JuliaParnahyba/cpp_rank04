/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:22:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/12 22:18:55 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::cout << "[BOOT] starting default-ctor initialization test\n";

    // ---------- SCOPE A: default-constructed ----------
    std::cout << "[A] begin scope\n";
    {
        Zombie z1;
        z1.announce();
        std::cout << "[A] mid scope (z exists here)\n";
    }
    std::cout << "[A] end scope (z was destroyed above)\n";

    // ---------- SCOPE B: name-constructed -------------
    std::cout << "[B] begin scope\n";
    {
        Zombie z2("Alice");
        z2.announce();
        std::cout << "[B] mid scope (z exists here)\n";
    }
    std::cout << "[B] end scope (z was destroyed above)\n";

    std::cout << "[DONE] default-ctor test complete\n";
    return 0;
}