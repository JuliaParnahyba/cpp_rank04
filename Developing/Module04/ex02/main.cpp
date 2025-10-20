/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:33:22 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 12:08:55 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "======= POLIMORPHISM + VIRTUAL DESTRUCTOR =======" << std::endl;

    // Animal a;                    // "error: cannot declare variable ‘a’ to be of abstract type ‘Animal’"
    // Animal *b = new Animal();    // "error: invalid new-expression of abstract class type ‘Animal’"

    std::cout << "=== Calling constructor ===\n";
    Animal *c = new Cat();
    Animal *d = new Dog();

    std::cout << "\n=== Calling method/behavior ===\n";
    c->makeSound();
    d->makeSound();
    
    std::cout << "\n=== Calling destructor ===\n";
    delete c;
    delete d;

    std::cout << "\n=== Array test (no leaks, polymorphism) ===";
    const int N = 6;
    Animal* zoo[N];

    std::cout << "\n=== Making the array ===\n";
    for (int i = 0; i < N; ++i) {
        if (i < N/2) zoo[i] = new Dog();    // create a new Dog at the first half
        else         zoo[i] = new Cat();    // create a new Cat at the last half
    }

    std::cout << "\n=== Seeing each class  ===\n";
    for (int i = 0; i < N; ++i) {
        std::cout << zoo[i]->getType() << " -> ";
        zoo[i]->makeSound(); // polymorphism
    }

    std::cout << "\n=== Calling destructor  ===\n";
    for (int i = 0; i < N; ++i) delete zoo[i];
    
    std::cout << "\n";
    std::cout << "=== DONE ===" << std::endl;

    return 0;
}