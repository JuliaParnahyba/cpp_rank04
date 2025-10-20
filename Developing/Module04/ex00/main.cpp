/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:28:30 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:49:20 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "Lets known the sound of Animals\n" << std::endl;

    std::cout << "=== RIGHT POLYMORPHISM ===\n";
    std::cout << "=== Constructor ===\n";
    const Animal *meta = new Animal();
    const Animal *d = new Dog();
    const Animal *c = new Cat();

    std::cout << "\nhas a [" << d->getType() << "]" << std::endl;
    d->makeSound();     // Dog
    
    std::cout << "\nhas a [" << c->getType() << "]" << std::endl;
    c->makeSound();     // Cat

    std::cout << "\nhas a [" << meta->getType() << "]" << std::endl;
    meta->makeSound();  // Animal

    std::cout << "\n=== Destructor ===\n";
    delete meta;
    delete d;
    delete c;

    std::cout << "\n=== WRONG POLYMORPHISM ===\n";
    std::cout << "=== Constructor ===\n";
    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();

    std::cout << "\nhas a [" << wc->getType() << "]" << std::endl;
    wc->makeSound(); // vai chamar WrongAnimal::makeSound() (sem virtual)

    std::cout << "\nhas a [" << wa->getType() << "]" << std::endl;
    wa->makeSound();

    std::cout << "\n=== Destructor ===\n";
    delete wc;
    delete wa;

    std::cout << "\n=== DONE ===\n";
    return 0;
}