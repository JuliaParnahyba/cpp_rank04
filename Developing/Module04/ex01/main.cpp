/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:28:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/18 23:32:19 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "Lets check the Brain\n" << std::endl;

    std::cout << "=== BRAIN BASIC ===" << std::endl;
    Brain b1;
    std::cout << "\n";

    std::cout << "[b1.setIdea(0, \"Chase the ball\")]" << std::endl;
    b1.setIdea(0, "Chase the ball");
    std::cout << "[b1.setIdea(1, \"Guard the house\")]" << std::endl;
    b1.setIdea(1, "Guard the house");
    std::cout << "\n";

    std::cout << "[b1.getIdea]" << std::endl;
    std::cout << "b1[0]: " << b1.getIdea(0) << std::endl;
    std::cout << "b1[1]: " << b1.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "=== COPY CTOR (deep) ===" << std::endl;
    Brain b2 = b1;
    std::cout << "[b2.getIdea]" << std::endl;
    std::cout << "b2[0]: " << b2.getIdea(0) << std::endl;
    std::cout << "b2[1]: " << b2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[b2.setIdea(0, \"Eat snacks\")]" << std::endl;
    b2.setIdea(0, "Eat snacks");
    std::cout << "\n";

    std::cout << "[*.getIdea]" << std::endl;
    std::cout << "b1[0]: " << b1.getIdea(0) << std::endl; // deve continuar "Chase the ball"
    std::cout << "b1[1]: " << b1.getIdea(1) << std::endl;
    std::cout << "b2[0]: " << b2.getIdea(0) << std::endl; // alterado só no b2
    std::cout << "b2[1]: " << b2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "=== COPY ASSIGN (deep) ===" << std::endl;
    Brain b3;
    b3 = b1;
    std::cout << "[b3.getIdea]" << std::endl;
    std::cout << "b3[0]: " << b3.getIdea(0) << std::endl;
    std::cout << "b3[1]: " << b3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[b3.setIdea(1, \"Sleep on keyboard\")]" << std::endl;
    b3.setIdea(1, "Sleep on keyboard");
    std::cout << "\n";

    std::cout << "[*.getIdea]" << std::endl;
    std::cout << "b1[0]: " << b1.getIdea(0) << std::endl; // deve continuar "Chase the ball"
    std::cout << "b1[1]: " << b1.getIdea(1) << std::endl;
    std::cout << "b3[0]: " << b3.getIdea(0) << std::endl; // alterado só no b2
    std::cout << "b3[1]: " << b3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "=== OUT OF RANGE ===" << std::endl;

    std::cout << "[b1.setIdea(200, \"INVALID\")]" << std::endl;
    b1.setIdea(200, "INVALID");
    std::cout << "[*.getIdea(200)]" << std::endl;
    std::cout << "b1[200]: " << b1.getIdea(200) << std::endl;
    std::cout << "\n";

    std::cout << "=== DOG BASIC ===" << std::endl;
    Dog d1;
    std::cout << "\n";

    std::cout << "[d1.setIdea(0, \"Chase the ball\")]" << std::endl;
    d1.setIdea(0, "Chase the ball");
    std::cout << "[d1.setIdea(1, \"Guard the house\")]" << std::endl;
    d1.setIdea(1, "Guard the house");
    std::cout << "\n";

    std::cout << "[d1.getIdea]" << std::endl;
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
    std::cout << "d1[1]: " << d1.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "=== COPY CTOR (deep) ===" << std::endl;
    Dog d2 = d1;
    std::cout << "[d2.getIdea]" << std::endl;
    std::cout << "d2[0]: " << d2.getIdea(0) << std::endl;
    std::cout << "d2[1]: " << d2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[d2.setIdea(0, \"Eat snacks\")]" << std::endl;
    d2.setIdea(0, "Eat snacks");
    std::cout << "\n";

    std::cout << "[*.getIdea]" << std::endl;
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl; // deve continuar "Chase the ball"
    std::cout << "d1[1]: " << d1.getIdea(1) << std::endl;
    std::cout << "d2[0]: " << d2.getIdea(0) << std::endl; // alterado só no b2
    std::cout << "d2[1]: " << d2.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "=== COPY ASSIGN (deep) ===" << std::endl;
    Dog d3;
    d3 = d1;
    std::cout << "[d3.getIdea]" << std::endl;
    std::cout << "d3[0]: " << d3.getIdea(0) << std::endl;
    std::cout << "d3[1]: " << d3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "[d3.setIdea(1, \"Sleep on keyboard\")]" << std::endl;
    d3.setIdea(1, "Sleep on keyboard");
    std::cout << "\n";

    std::cout << "[*.getIdea]" << std::endl;
    std::cout << "d1[0]: " << d1.getIdea(0) << std::endl; // deve continuar "Chase the ball"
    std::cout << "d1[1]: " << d1.getIdea(1) << std::endl;
    std::cout << "d3[0]: " << d3.getIdea(0) << std::endl; // alterado só no b2
    std::cout << "d3[1]: " << d3.getIdea(1) << std::endl;
    std::cout << "\n";

    std::cout << "=== POLIMORPHISM + VIRTUAL DESTRUCTOR ===" << std::endl;
    Animal *a = new Dog();
    a->makeSound();
    delete a;
    
    std::cout << "\n";
    std::cout << "=== DESTRUCTORS ===" << std::endl;

    return 0;
}