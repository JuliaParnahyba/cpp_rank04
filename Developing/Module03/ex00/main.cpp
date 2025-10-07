/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:37:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/06 21:14:56 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "Its run\n" << std::endl;

    Studant a;

    a.name = "Ju";
    a.age = 38;
    a.registration = 123459876;

    a.introduce();
    a.study();


    return 0;
}