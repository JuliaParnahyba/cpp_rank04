/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:22:29 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 12:37:45 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // ---------- SCOPE newZombie (heap) -------------
    {
        Zombie *p = newZombie("Heapster");
        p->announce();
        delete p;
    }
    
    // ---------- SCOPE randomChump (stack on function) -------------
    {
        randomChump("Ephemeral");
    }
    
    return 0;
}