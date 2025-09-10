/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:29:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 20:34:10 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Caller owns the returned array and must delete[] it.
Zombie *zombieHorde(int N, const std::string &name) {
    if (N <= 0)
        return 0;   // no horde; caller must check and not use
    
    Zombie *z = new Zombie[N]; // default-construct N elements
    for (int i = 0; i < N; i++) {
        z[i].setName(name);    // post-construction init
    }

    return z;   // caller owns and must delete[] z;
}