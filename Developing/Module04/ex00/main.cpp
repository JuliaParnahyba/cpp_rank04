/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:28:30 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:54:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "Lets known the sound of Animals\n" << std::endl;

    std::cout << "=== Right polymorphism ===\n";
    const Animal *meta = new Animal();
    const Animal *d = new Dog();
    const Animal *c = new Cat();

    std::cout << "\nhas a [" << d->getType() << "]" << std::endl;
    std::cout << "has a [" << c->getType() << "]\n" << std::endl;

    c->makeSound();
    d->makeSound();
    meta->makeSound();

    delete meta;
    delete d;
    delete c;

    std::cout << "\n=== Wrong polymorphism ===\n";
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << "\nhas a [" << wc->getType() << "]\n" << std::endl;
    wc->makeSound(); // vai chamar WrongAnimal::makeSound() (sem virtual)
    wa->makeSound();

    delete wc;
    delete wa;

    return 0;
}