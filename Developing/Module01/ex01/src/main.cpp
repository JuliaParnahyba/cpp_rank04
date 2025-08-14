/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:22:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 20:38:24 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie z;               // default
    z.setName("Tester");    // pós new[] será parecido
    z.announce();           // "Tester: BraiiiiiiinnnzzzZ..."

    const int N = 5;
    Zombie *h = zombieHorde(N, "HordeGuy");
    if (h) {
        for (int i = 0; i < N; i++)
            h->announce();
        delete[] h;
    }
        
    return 0;
}