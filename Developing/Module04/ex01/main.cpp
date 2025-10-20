/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:28:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 11:42:26 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "Lets check the Brain\n" << std::endl;

    std::cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-." << std::endl;
    std::cout << "======= BRAIN BASIC =======" << std::endl;
    std::cout << "=== Calling constructor ===\n";
    Brain b1;
    std::cout << "\n";

    std::cout << "[b1.setIdea(0, \"Chase the ball\")]" << std::endl;
    b1.setIdea(0, "Chase the ball");

    std::cout << "[b1.setIdea(1, \"Guard the house\")]" << std::endl;
    b1.setIdea(1, "Guard the house");
    std::cout << "\n";

    std::cout << "[b1.getIdea()]" << std::endl;
    std::cout << "b1[0]: " << b1.getIdea(0) << std::endl;
    std::cout << "b1[1]: " << b1.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= COPY CTOR (deep) =======" << std::endl;
    std::cout << "=== Calling copy constructor ===\n";
    Brain b2 = b1;
    std::cout << "\n";
    std::cout << "[b2.getIdea()]" << std::endl;
    std::cout << "b2[0]: " << b2.getIdea(0) << std::endl;
    std::cout << "b2[1]: " << b2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[b2.setIdea(0, \"Eat snacks\")]" << std::endl;
    b2.setIdea(0, "Eat snacks");
    std::cout << "\n";

    std::cout << "[*.getIdea()]" << std::endl;
    std::cout << "b1[0]: " << b1.getIdea(0) << std::endl; // still "Chase the ball"
    std::cout << "b1[1]: " << b1.getIdea(1) << std::endl;
    std::cout << "b2[0]: " << b2.getIdea(0) << std::endl; // changed only in b2
    std::cout << "b2[1]: " << b2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= COPY ASSIGN (deep) =======" << std::endl;
    std::cout << "=== Calling copy assign ===\n";
    Brain b3;
    b3 = b1;
    std::cout << "\n";
    
    std::cout << "[b3.getIdea()]" << std::endl;
    std::cout << "b3[0]: " << b3.getIdea(0) << std::endl;
    std::cout << "b3[1]: " << b3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[b3.setIdea(1, \"Sleep on keyboard\")]" << std::endl;
    b3.setIdea(1, "Sleep on keyboard");
    std::cout << "\n";

    std::cout << "[*.getIdea()]" << std::endl;
    std::cout << "b1[0]: " << b1.getIdea(0) << std::endl;
    std::cout << "b1[1]: " << b1.getIdea(1) << std::endl;
    std::cout << "b3[0]: " << b3.getIdea(0) << std::endl;
    std::cout << "b3[1]: " << b3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= OUT OF RANGE =======" << std::endl;
    std::cout << "[b1.setIdea(200, \"INVALID\")]" << std::endl;
    b1.setIdea(200, "INVALID");
    std::cout << "\n";
    std::cout << "[*.getIdea(200)]" << std::endl;
    std::cout << "b1[200]: " << b1.getIdea(200) << std::endl;
    std::cout << "\n";

    std::cout << "======= DOG BASIC (with brain) =======" << std::endl;
    std::cout << "=== Calling constructor ===\n";
    Dog d1;
    std::cout << "\n";

    std::cout << "[d1.setIdea(0, \"Chase the ball\")]" << std::endl;
    d1.setIdea(0, "Chase the ball");
    std::cout << "[d1.setIdea(1, \"Guard the house\")]" << std::endl;
    d1.setIdea(1, "Guard the house");
    std::cout << "\n";

    std::cout << "[d1.getIdea()]" << std::endl;
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
    std::cout << "d1[1]: " << d1.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= COPY CTOR (deep) =======" << std::endl;
    std::cout << "=== Calling copy constructor ===\n";
    Dog d2 = d1;
    std::cout << "\n";

    std::cout << "[d2.getIdea()]" << std::endl;
    std::cout << "d2[0]: " << d2.getIdea(0) << std::endl;
    std::cout << "d2[1]: " << d2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[d2.setIdea(0, \"Eat snacks\")]" << std::endl;
    d2.setIdea(0, "Eat snacks");
    std::cout << "\n";

    std::cout << "[*.getIdea()]" << std::endl;
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
    std::cout << "d1[1]: " << d1.getIdea(1) << std::endl;
    std::cout << "d2[0]: " << d2.getIdea(0) << std::endl;
    std::cout << "d2[1]: " << d2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= COPY ASSIGN (deep) =======" << std::endl;
    std::cout << "=== Calling copy assign ===\n";
    Dog d3;
    d3 = d1;
    std::cout << "\n";

    std::cout << "[d3.getIdea()]" << std::endl;
    std::cout << "d3[0]: " << d3.getIdea(0) << std::endl;
    std::cout << "d3[1]: " << d3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[d3.setIdea(1, \"Sleep on keyboard\")]" << std::endl;
    d3.setIdea(1, "Sleep on keyboard");
    std::cout << "\n";

    std::cout << "[*.getIdea()]" << std::endl;
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
    std::cout << "d1[1]: " << d1.getIdea(1) << std::endl;
    std::cout << "d3[0]: " << d3.getIdea(0) << std::endl;
    std::cout << "d3[1]: " << d3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= CAT BASIC (with brain) =======" << std::endl;
    std::cout << "=== Calling copy constructor ===\n";
    Cat c1;
    std::cout << "\n";

    std::cout << "[c1.setIdea(0, \"Chase the ball\")]" << std::endl;
    c1.setIdea(0, "Chase the ball");
    std::cout << "[c1.setIdea(1, \"Guard the house\")]" << std::endl;
    c1.setIdea(1, "Guard the house");
    std::cout << "\n";

    std::cout << "[c1.getIdea()]" << std::endl;
    std::cout << "c1[0]: " << c1.getIdea(0) << std::endl;
    std::cout << "c1[1]: " << c1.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= COPY CTOR (deep) =======" << std::endl;
    std::cout << "=== Calling copy constructor ===\n";
    Cat c2 = c1;
    std::cout << "\n";

    std::cout << "[c2.getIdea()]" << std::endl;
    std::cout << "c2[0]: " << c2.getIdea(0) << std::endl;
    std::cout << "c2[1]: " << c2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[c2.setIdea(0, \"Eat snacks\")]" << std::endl;
    c2.setIdea(0, "Eat snacks");
    std::cout << "\n";

    std::cout << "[*.getIdea()]" << std::endl;
    std::cout << "c1[0]: " << c1.getIdea(0) << std::endl;
    std::cout << "c1[1]: " << c1.getIdea(1) << std::endl;
    std::cout << "c2[0]: " << c2.getIdea(0) << std::endl;
    std::cout << "c2[1]: " << c2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "======= COPY ASSIGN (deep) =======" << std::endl;
    std::cout << "=== Calling copy assign ===\n";
    Cat c3;
    c3 = c1;
    std::cout << "\n";

    std::cout << "[c3.getIdea()]" << std::endl;
    std::cout << "c3[0]: " << c3.getIdea(0) << std::endl;
    std::cout << "c3[1]: " << c3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[c3.setIdea(1, \"Sleep on keyboard\")]" << std::endl;
    c3.setIdea(1, "Sleep on keyboard");
    std::cout << "\n";

    std::cout << "[*.getIdea()]" << std::endl;
    std::cout << "c1[0]: " << c1.getIdea(0) << std::endl;
    std::cout << "c1[1]: " << c1.getIdea(1) << std::endl;
    std::cout << "c3[0]: " << c3.getIdea(0) << std::endl;
    std::cout << "c3[1]: " << c3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << ".-.-. Dtor only at the end off main .-.-." << std::endl;
    std::cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n\n" << std::endl;

    std::cout << "======= POLIMORPHISM + VIRTUAL DESTRUCTOR =======" << std::endl;
    std::cout << "=== Calling constructor ===\n";
    Animal *a = new Dog();
    Animal *e = new Cat();

    std::cout << "\n=== Calling method/behavior ===\n";
    a->makeSound();
    e->makeSound();
    
    std::cout << "\n=== Calling destructor ===\n";
    delete a;
    delete e;

    std::cout << "\n=== Array test (no leaks, polymorphism) ===";
    const int N = 6;
    Animal* zoo[N];

    std::cout << "\n=== Making the array ===\n";
    for (int i = 0; i < N; ++i) {
        if (i < N/2) zoo[i] = new Dog();
        else         zoo[i] = new Cat();
    }

    std::cout << "\n=== Seeing each class  ===\n";
    for (int i = 0; i < N; ++i) {
        std::cout << zoo[i]->getType() << " -> ";
        zoo[i]->makeSound(); // polimorfismo
    }

    std::cout << "\n=== Calling destructor  ===\n";
    for (int i = 0; i < N; ++i) delete zoo[i];

    std::cout << "\n";
    std::cout << "======= DONE POLIMORPHISM + VIRTUAL DESTRUCTOR =======" << std::endl;
    std::cout << "\n";
    std::cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n" << std::endl;
    std::cout << "======= OTHER DESTRUCTORS =======" << std::endl;
    
    return 0;
}